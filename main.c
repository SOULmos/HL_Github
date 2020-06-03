#include <stdio.h>

int main(void) {
  printf("Hello World\n");
  int a, b, n;
  printf("1.+, 2.-, 3.*, 4./ select : ");
  scanf("%d", &n);
  printf("input a,b:");
  scanf("%d %d", &a, &b);
  switch(n) {
    case 1:
      printf("%d + %d = %d\n", a, b, a + b);
    case 2:
      printf("%d - %d = %d\n", a, b, a - b);
    case 3:
      printf("%d * %d = %d\n", a, b, a * b);
    case 4:
      printf("%d / %d = %d\n", a, b, a / b);
  }
  return 0;
}