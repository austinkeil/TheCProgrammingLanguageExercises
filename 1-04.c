/**
 * Author: Austin Keil
 *
 * Solution for Exercise 1-4.
 *
 * Write a program to print the corresponding Celsius to
 * Fahrenheit table.
 */

#include <stdio.h>

int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = -20;
  upper = 160;
  step = 20;

  printf("%6s %10s\n", "Celsius", "Fahrenheit");
  celsius = lower;
  while (celsius <= upper) {
    fahr = (9.0/5.0) * celsius + 32;
    printf("%6.0f %10.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
