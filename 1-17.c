/**
 * Author: Austin Keil
 *
 * Solution to Exercise 1-17.
 *
 * Write a program to print all input lines that are longer than
 * 80 characters.
 */

#include <stdio.h>
#define MAXLINE 1000

int getline2(char line[]); 

int main()
{
  int len;         
  char line[MAXLINE];   

  while ((len = getline2(line)) > 0) {
    if (len > 80)
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
