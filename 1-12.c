#include <stdio.h>

#define   IN    1
#define   OUT   0

// This program prints its own input one word per line
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
