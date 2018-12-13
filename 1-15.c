#include <stdio.h>

void PrintTable(int low, int high);

int main()
{
  PrintTable(-20, 300);  
}

void PrintTable(int low, int high)
{
  int celcius, fahr;
  
  printf("Celcius\t\tFahrenheit\n");
  for (int fahr = low; fahr <= high; fahr += 20)
  {
    celcius = 5/9.0 * (fahr - 32);
    printf("%7d\t\t%10d\n", fahr, celcius);
  } 
}
