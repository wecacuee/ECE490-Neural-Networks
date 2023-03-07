import microtorch as t
import numpy as np

class Parameter(t.Tensor):
    """
    A kind of Tensor that is to be considered a module parameter.

    Parameters are Tensor subclasses, that have a very special property when used with Module s - when they’re assigned as Module attributes they are automatically added to the list of its parameters, and will appear e.g. in parameters() iterator. Assigning a Tensor doesn’t have such effect. This is because one might want to cache some temporary state, like last hidden state of the RNN, in the model. If there was no such class as Parameter, these temporaries would get registered too.
    """
    pass

class Module:
    """
    PyTorch uses modules to represent neural networks. Modules are:

    Building blocks of stateful computation. PyTorch provides a robust library of modules and makes it simple to define new custom modules, allowing for easy construction of elaborate, multi-layer neural networks.
    
    More details here: https://pytorch.org/docs/stable/notes/modules.html
    """
    def __init__(self):
        super().__setattr__('_parameters', {})
        super().__setattr__('_modules', {})

    def forward(self, *args):
        pass
    
    def named_children(self):
        return self._modules.items()
    
    def named_modules(self):
        for mname, module in self._modules.items():
            for mn, mod in module.named_modules():
                yield mn, mod

    def named_parameters(self):
        for mname, module in self._modules.items():
            for pname, param in module.named_parameters():
                yield ".".join(mname, pname), param

    def parameters(self):
        return (param for pname, param in self.named_parameters())
    
    def __call__(self, *a, **kw): return self.forward(*a, **kw)
    
    def __setattr__(self, k, v):
        if isinstance(v, Parameter):
            self._parameters[k] = v
        elif isinstance(v, Module):
            self._modules[k] = v
        else:
            super().__setattr__(k, v)
            
    def __getattr__(self, name):
        if '_parameters' in self.__dict__:
            _parameters = self.__dict__['_parameters']
            if name in _parameters:
                return _parameters[name]
        if '_modules' in self.__dict__:
            modules = self.__dict__['_modules']
            if name in modules:
                return modules[name]
    
def relu(x):
    return t.maximum(x, 0)

class Linear(Module):
    def __init__(self, in_features, out_features, bias=True):
        super().__init__()
        self.W = Parameter(np.random.rand(out_features, in_features))
        self.b = Parameter(np.random.rand(out_features))
    
    def forward(self, x):
        return x @ self.W.T + self.b
    
class ReLU(Module):
    def forward(self, x):
        return relu(x)

class Sequential(Module):
    def __init__(self, *modules):
        super().__init__()
        self._seq_modules = modules
        for idx, mod in enumerate(modules):
            self._modules[str(idx)] = mod
        
    def forward(self, x):
        for mod in self._seq_modules:
            x = mod(x)
        return x
    
def mse_loss(x, y):
    return ((x - y)**2).mean()


    



