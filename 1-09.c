/**
 * Author: Austin Keil
 *
 * Solution to Exercise 1-9.
 *
 * Write a program to copy its input to its output, replacing 
 * each string of one or more blanks by a single blank.
 */

#include <stdio.h>

int main()
{
  int c, last;

  last = 0; // last was blank?
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      last = 1;
    } else if (last) {
      putchar(' ');
      putchar(c);
      last = 0;
    } else {
      putchar(c);
      last = 0;
    }
  }
}
