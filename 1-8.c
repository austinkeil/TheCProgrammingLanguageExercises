#include <stdio.h>

// Count the number of blanks, tabs and newline characters in a file
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
