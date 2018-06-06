#include <stdio.h>

int main() {

  // printf("Hey, what's your name:\t");
  // char string[32];
  // scanf("%s", string);
  // printf("Nice to meet you, %s\n", string);

  // int a,b;
  // printf("Two numbers, please:\t");
  // scanf("%d %d",&a,&b);
  // printf("a * b = %d\n", a*b);


  // int a;
  // printf("One number, please:\t");
  // scanf("%d",&a);
  // if (a>15) {
  //   printf("YAY!\n");
  // } else {
  //   printf("Wow, you suck at this.\n");
  // }

  // for (int i = 0; i < 9999; i++) {
  //   printf("%d ", i);
  // }

  int a;
  printf("One number, please:\t");
  scanf("%d",&a);

  while (a != 42) {
    printf("Sorry, you're wrong.\nPlease try again.\n");
    printf("Try something else:\t");
    scanf("%d",&a);
  }
  printf("Wow, took you long enough\n");
  return 0;
}
