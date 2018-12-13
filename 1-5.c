#include <stdio.h>

#define   LOWER   0
#define   UPPER   300
#define   STEP    20

// Print Celcius-Fahrenheit table
int main()
{
  double celcius, fahrenheit;

  celcius = UPPER;
  printf("%10s %10s\n", "Celcius", "Fahrenheit");
  while (celcius >= LOWER) {
    fahrenheit = (9.0/5.0)*celcius + 32;
    printf("%10.0f %10.1f\n", celcius, fahrenheit);
    celcius -= STEP;
  }
}


