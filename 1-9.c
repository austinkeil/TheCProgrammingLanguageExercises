#include <stdio.h>

// This program copies its input to its output, replacing
// each string of one or more blanks by a single line.
int main()
{
  int c, last;

  last = 0;
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
