/**
 * Author: Austin Keil
 *
 * Solution to Exercise 1-12.
 *
 * Write a program that prints its input one word per line.
 */

#include <stdio.h>

#define   IN    1
#define   OUT   0

int main()
{
  int c;
  
  int status = OUT;
  while ((c = getchar()) != EOF) {
    if (status == IN && (c == '\n' || c == ' ' || c == '\t')) {
      putchar('\n');
      status = OUT;
    } else if (c != '\n' && c != ' ' && c != '\t') {
      putchar(c);
      status = IN;
    }
  }
}
