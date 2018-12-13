#include <stdio.h>
#define MAXLINE 1000

int getline2(char line[]); 

// This program prints the length of arbitrarily long input lines,
// and as much as possible of the text.
int main()
{
  int len;         
  char line[MAXLINE];   

  while ((len = getline2(line)) > 0) {
    printf("%d: %s", len, line);
  }
  return 0; 
}

int getline2(char s[])
{
  int c, i;
  
  for(i=0; (c=getchar()) != EOF && c!='\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}
