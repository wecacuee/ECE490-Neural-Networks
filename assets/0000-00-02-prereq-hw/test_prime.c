#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

// DONOT edit this 
long randint(long min, long max) {
    return rand() % (max - min)  + min;
}

// EDIT this function. DONOT edit the signature of the function
bool is_prime(long n, long* factor_p) {
    // TODO: FIXME: Write a function. Extra credit for making it recursive
    *factor_p = 2;
    return false; // most numbers are not prime
}

// DONOT edit this function
bool test_prime() {
    long factor;
    long n = randint(1, 1000);
    printf("testing n = %ld; ", n);
    if (!is_prime(n, &factor)) {
	printf("%ld is composite; ", n);
        if (n % factor == 0) {
            return true;
        } else {
            fprintf(stderr, "Fail for is_prime(%ld, %ld)\n", n, factor);
            return false;
        }
    } else {
	printf("%ld is prime; ", n);
        int i;
	// Try 10 random factors
        for (i = 0; i < 20; ++i)
            factor = randint(2, n/2);
            if (n % factor == 0) {
                fprintf(stderr, "Fail for is_prime(%ld, %ld)\n", n, factor);
                return false;
            }
        return true;
    }
}

int main(int argc, char** argv) {
  long factor;
#define ARRSIZE 10
  long primes[ARRSIZE] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
  short i;
  for (i = 0; i < ARRSIZE; ++i)
      if (is_prime(primes[i], &factor) != true) 
	  fprintf(stderr, "Fail for is_prime(%ld)\n", primes[i]);
      else
	  printf("Pass\n");

  long composites[ARRSIZE] = {1, 4, 6, 8, 10, 14, 21, 25, 27, 33 };
  for (i = 0; i < ARRSIZE; ++i)
      if (is_prime(composites[i], &factor) != false) 
	  fprintf(stderr, "Fail for is_prime(%ld)\n", composites[i]);
      else
	  printf("Pass\n");

  for (i = 0; i < 10; ++i) {
      if (test_prime()) 
	  printf("%d: pass\n", i);
      else
	  fprintf(stderr, "%d: fail\n", i);
  }
}
