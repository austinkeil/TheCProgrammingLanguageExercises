/** 
 * Author: Austin Keil
 *
 * Solution to Exercise 1-20.
 *
 * Write a program 'detab' that replaces tabs in the input with the
 * proper number of blanks to space to the next tab stop. Assume a
 * fixed set of tab stops, say every n columns.
 */

#include <stdio.h>
#define MAXLINE 1000
#define TABWIDTH 8

int Getline2(char s[], int lim);
void Detab(char s[], char t[], int tc);

int main()
{
  char s[MAXLINE], t[MAXLINE];
  Getline2(s, MAXLINE);
  Detab(s, t, TABWIDTH);
  printf("%s\n", t);
}

int Getline2(char s[], int lim) {
  int i, c;
  for (i=0; i<lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
      s[i] = c;
  }
  if (c == '\n') {
    s[i++] = c;
  }
  s[i] = '\0';
  return i;
}

void Detab(char s[], char t[], int tc) {
  int i, j;
  i = j = 0;
  while (s[i] != '\0') {
    if (s[i] == '\t') {
      // while not at a tabstop; put a space
      do {
        t[j] = ' ';
        ++j;
      } while (j % tc);
    } else {
      t[j] = s[i];
      ++j;
    }
    ++i;
  }
} 

