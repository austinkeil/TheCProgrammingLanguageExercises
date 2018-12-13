#include <stdio.h>

int ConvertToCelcius(int fahr);

// This is a rewrite of the temperature conversion program of Section
// 1.2 that uses a function for conversion
int main()
{
  int celcius, fahr;
  int low, high;

  low = -20;
  high = 300; 

  printf("Celcius\t\tFahrenheit\n");
  for (int fahr = low; fahr <= high; fahr += 20)
  {
    celcius = 5/9.0 * (fahr - 32);
    printf("%7d\t\t%10d\n", fahr, ConvertToCelcius(fahr));
  } 
}

// Takes a temperature in fahrenheit and returns the temperature in celcius
int ConvertToCelcius(int fahr)
{
  return 5/9.0 * (fahr - 32); 
}
