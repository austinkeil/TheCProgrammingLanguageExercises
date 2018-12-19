/**
 * Author: Austin Keil
 *
 * Solution to Exercise 1-14.
 *
 * Write a program to print a histogram of the frequencies of
 * different characters in its input.
 */

#include <stdio.h>

int main()
{
  int c;
  int all_chars[256];
  
  for (int i = 0; i < 256; ++i) {
    all_chars[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    ++all_chars[c];
  }

  for (int i = 0; i < 256; ++i) {
    printf("ASCII value of char %c is %d: ", i, i);
    for (int j = 0; j < all_chars[i]; ++j){
      putchar('*');
    }
    putchar('\n');
  }
}
