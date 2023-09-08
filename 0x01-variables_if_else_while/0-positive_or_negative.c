#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main(void) {
  int n;

  n = rand() % INT_MAX; 
  if (n > 0) {
    printf("%d is positive\n", n);
  } else if (n == 0) {
    printf("%d is zero\n", n);
  } else {
    printf("%d is negative\n", n);
  }

  return 0;
}
