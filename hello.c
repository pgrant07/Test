#include <stdio.h>

int sum (int x, int y) {
  return x+y;
}

int diff (int x, int y) {
  return x-y;
}

int main(){
  printf("Hello World\n");

  printf("Sum of 5 + 6: %d\n", sum(5,6));
  printf("Difference of 11 - 6: %d\n", diff(11,6));

  return 0;
}
