/**
 * Author: Austin Keil
 *
 * Solution to Exercise 1-13.
 *
 * Write a program to print a histogram of the lengths of
 * words in its input. It is easy to draw the histogram with
 * the bars horizontal; a vertical orientation is more
 * challenging. (See 1-13-2 for vertical histogram).
 */

#include <stdio.h>

#define   IN    1
#define   OUT   0

int main()
{
  int c, count;

  count = 0;
  int status = IN;
  while ((c = getchar()) != EOF) {
    if ((c == ' ' || c == '\t' || c == '\n') && status == IN) {
      for (int i = 0; i < count; ++i) {
        putchar('*');
      }
      putchar('\n');
      count = 0;
    } else if (c != ' ' && c != '\t' && c != '\n') {
      ++count;
    }
  }
}
