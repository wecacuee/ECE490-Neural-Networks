#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

// DONOT edit this 
int randint(int min, int max) {
    return rand() % (max - min)  + min;
}

long factorial(short n);

// DONOT edit this
bool test_factorial() {
    short n = randint(0, 25);
    if (factorial(n) != n*factorial(n-1)) {
        fprintf(stderr, "Fail for factorial(%d)\n", n);
        return false;
    } else
        return true;
}

// Please EDIT this. DONOT change the function signature
long factorial(short n) {
    // TODO: Write this recursive function in C
    return 1;
}

int main(int argc, char** argv) {
    if (factorial(0) != 1)
      fprintf(stderr, "Fail for factorial(1) == 1\n");
    if (factorial(3) != 6)
      fprintf(stderr, "Fail for factorial(3) == 6\n");
    if (factorial(5) != 120)
      fprintf(stderr, "Fail for factorial(5) == 120\n");

    short i;
    for (i = 0; i < 10; ++i) {
	if (test_factorial())
	  printf("%d: pass\n", i);
	else
	  fprintf(stderr, "%d: fail\n", i);
    }
}
