/**
 * Author: Austin Keil
 *
 * Solution to Exercise 1-15.
 *
 * Rewrite the temperature conversion program of Section 1.2
 * to use a function for conversion.
 */
#include <stdio.h>

int ConvertToCelsius(int fahr);

int main()
{
  int celsius, fahr;
  int low, high;

  low = -20;
  high = 300; 

  printf("Celsius\t\tFahrenheit\n");
  for (int fahr = low; fahr <= high; fahr += 20)
  {
    celsius = 5/9.0 * (fahr - 32);
    printf("%7d\t\t%10d\n", fahr, ConvertToCelsius(fahr));
  } 
}

// Takes a temperature in Fahrenheit and returns the 
// temperature in Celsius
int ConvertToCelsius(int fahr)
{
  return 5/9.0 * (fahr - 32); 
}
