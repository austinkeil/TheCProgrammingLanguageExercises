#include <stdio.h>
#define MAXLINE 1000

int getline2(char line[]); 
void reverse(char line[]);

// This program reverses its input a line at a time
int main()
{
  int len;         
  char line[MAXLINE];   

  while ((len = getline2(line)) > 0) {
    reverse(line);
    printf("%s", line);
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

void reverse(char s[])
{
  int last = 0;
  for (last = 0; s[last] != '\0'; ++last) {
    ;
  }

  // last contains the 'last' valid character before a '\n' or '\0'
  if (s[--last] == '\n') {
    --last;
  }

  char temp;
  for (int i = 0, j = last; i < j; ++i, --j) {
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
  }
}
