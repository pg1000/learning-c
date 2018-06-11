#include <stdio.h>

int main() {

  int a[10] = {32, 30, 27, 24, 23, 22, 21, 4, 3, 1};
  int c = 0;
  int d = -1;
  int e = -1;
  // printf("%p\n", a);
  // printf("%p\n", &b);

  for (int i = 0; i < 10; i++) {
    printf("%d ", a[i]);
    c = a[i] + c;
    if (e < a[i]){
    e = a[i];  
    }
    if (d < a[i]) {
      e = d;
      d = a[i];
    }
  }
  printf("\n%d is all these together\n", c);
  printf("%d is the largest number here\n", d);
  printf("%d is the second largest one though\n", e);
  return 0;
}
