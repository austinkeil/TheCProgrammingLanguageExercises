#include <stdio.h>

#define   IN    1
#define   OUT   0

int main()
{
  int c, high;
  int nw;           // keeps track of what word we're on
  int nchars[100];  // array of word lengths
  int status = OUT;

  for (int i = 0; i < 100; ++i) {
    nchars[i] = 0;
  }

  nw = high = 0;
  while ((c = getchar()) != EOF){
    if (status == IN && (c != ' ' && c != '\t' && c != '\n')) {
      ++nchars[nw];
      if (nchars[nw] > high)
        ++high;
    } else if (status == IN) {    // if end of word
      ++nw;
      status = OUT;
    } else if (c != ' ' && c != '\t' && c != '\n') {    // start of word
      status = IN;
      ++nchars[nw];
    }
  }
  while (high > 0) {
    for (int i = 0; i <= nw; ++i) {
      if (nchars[i] < high) {
        putchar(' ');
      } else {
        putchar('*');
        --nchars[i];
      }
    }
    --high;
    putchar('\n');
  }
}
