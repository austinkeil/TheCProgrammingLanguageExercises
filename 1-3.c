#include <stdio.h>

// Prints a Celcius-Fahrenheit table
int main()
{
  double celcius, fahrenheit;
  int lower, upper, step;

  lower = -20;
  upper = 150;
  step = 10;

  celcius = lower;
  printf("%10s %10s\n", "Celcius", "Fahrenheit");
  while (celcius <= upper) {
    fahrenheit = (9.0/5.0)*celcius + 32;
    printf("%10.0f %10.1f\n", celcius, fahrenheit);
    celcius += step;
  }
}
