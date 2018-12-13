#include <stdio.h>

#define   IN    1
#define   OUT   0

// This program prints a horizontal histogram of lengths of words in its input.
// For a verticle histogram, see 1-13-2.c
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
