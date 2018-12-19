/**
 * Author: Austin Keil
 *
 * Solution to Exercise 1-6.
 *
 * Verify that the expression getchar() != EOF is 0 or 1.
 */

#include <stdio.h>

int main()
{
  printf("Please enter a character:\n");
  printf("The expression \"getchar() != EOF\" evaluates to \"%d\"", getchar() != EOF);
}
