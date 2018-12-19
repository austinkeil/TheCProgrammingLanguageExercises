/**
 * Author: Austin Keil
 *
 * Solution to Exercise 1-5.
 */

#include <stdio.h>

// Print Celcius-Fahrenheit table in reverse order
int main()
{
  double celcius, fahrenheit;

  int lower = 0;
  int upper = 300;
  int step = 20;

  celcius = upper;
  printf("%10s %10s\n", "Celcius", "Fahrenheit");
  while (celcius >= lower) {
    fahrenheit = (9.0/5.0)*celcius + 32;
    printf("%10.0f %10.1f\n", celcius, fahrenheit);
    celcius -= step;
  }
}


