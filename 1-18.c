#include <stdio.h>
#define MAXLINE 1000

int GetStrippedLine(char line[], int lim); 

// This program removes trailing blanks and tabs from each line of input.
// It completely deletes entirely blank lines.
int main()
{
  int len;         
  char line[MAXLINE];   

  while ((len = GetStrippedLine(line, MAXLINE)) > 0) {
    printf("%s", line);
  }
  return 0; 
}

// returns 0 if blank line;
int GetStrippedLine(char s[], int lim)
{
  int c, i;
  
  for(i=0; i < lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
    s[i] = c; 
  s[i] = '\n';
  while(i > 0 && s[i] == '\n' || s[i] == '\t' || s[i] == ' '){
    --i;
  }
  if (i == 0) {
    s[i++] = '\0';
  } else {
    s[++i] = '\n';
    s[++i] = '\0';
  }
  return i;
}
