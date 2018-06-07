#include <stdio.h>

int main() {
  int guess=0;
  int start=0;
  int end=100;
  int in=0;
  printf("Please think of a number between 1 and 100\n");

  while (1) {
    int avg = (start + end)/2;
    printf("My guess is %d\n", avg);
    printf("Is my guess right (1), too high (2), or too low (3): ");
    scanf("%d", &in);
    guess++;
    if (in==1) {
      break;
    }
    if (in==2) {
      end = avg - 1;
    }
    if (in==3) {
      start = avg + 1;
    }
  }
  printf("Wow, that only took me %d guesses!\n", guess);

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

  // int a;
  // printf("One number, please:\t");
  // scanf("%d",&a);
  //
  // while (a != 42) {
  //   printf("Sorry, you're wrong.\nPlease try again.\n");
  //   printf("Try something else:\t");
  //   scanf("%d",&a);
  // }
  // printf("Wow, took you long enough\n");
  return 0;
}
