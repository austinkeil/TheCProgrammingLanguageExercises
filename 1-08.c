/**
 * Author: Austin Keil
 *
 * Solution to Exercise 1-8.
 *
 * Write a program to count blanks, tabs, and newlines.
 */

#include <stdio.h>

int main()
{
  int c, b, t, nl;

  b = t = nl = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++nl;
    else if (c == '\t')
      ++t;
    else if (c == ' ')
      ++b;
  }
  printf("%d %d %d", b, t, nl);
}
