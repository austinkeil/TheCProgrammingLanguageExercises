/**
 * Author: Austin Keil
 *
 * Solution to Exercise 1-19.
 *
 * Write a function reverse(s) that reverses the character string
 * s. use it to write a program that reverses its input a line at
 * a time.
 */

#include <stdio.h>
#define MAXLINE 1000

int getline2(char line[], int lim); 
void reverse(char line[]);

int main()
{
  int len;         
  char line[MAXLINE];   

  while ((len = getline2(line, MAXLINE)) > 0) {
    reverse(line);
    printf("%s", line);
  }
  return 0; 
}

int getline2(char s[], int lim)
{
  int c, i;
  
  for(i=0; i < lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
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
