#include <stdio.h>
int main() {
  int f1 = 0, f2 = 1, nextTerm = 0, n;
  printf("Enter a positive number: ");
  scanf("%d", &n);

  
  printf("Fibonacci Series: %d, %d, ", f1, f2);
  nextTerm = f1 + f2;

  while (nextTerm <= n) {
    printf("%d, ", nextTerm);
    f1 = f2;
    f2 = nextTerm;
    nextTerm = f1 + f2;
  }

  return 0;
}
