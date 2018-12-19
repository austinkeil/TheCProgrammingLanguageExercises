/**
 * Author: Austin Keil
 *
 * Solution for Exercise 1-3.
 *
 * Modify the termperature conversion program to print a 
 * heading above the table.
 */

#include <stdio.h>

int main()
{
  double celsius, fahrenheit;
  int lower, upper, step;

  lower = -20;
  upper = 150;
  step = 10;

  celsius = lower;
  printf("%10s %10s\n", "Celsius", "Fahrenheit");
  while (celsius <= upper) {
    fahrenheit = (9.0/5.0)*celsius + 32;
    printf("%10.0f %10.1f\n", celsius, fahrenheit);
    celsius += step;
  }
}
