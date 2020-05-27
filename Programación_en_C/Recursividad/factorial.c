/* Just  compute the factorial function in two different ways.*/

#include <stdio.h>

// recursive verion of the factorial function
long recursive_factorial(int n){
  if (n == 0)
  {
    return 1;
  }
  else
  {
    return n * recursive_factorial(n-1);
  }
}

// non recursive version of the fatorial function
long factorial(int n)
{
  long result = 1;
  for (int i = 1; i <= n; i++)
  {
      result = result * i;
  }
  return 0; // harcoded
}

// main loop
int main(void)
{
    printf("FUNCIONANNANANA\n");
    int number;

    printf("Please enter a positive integer: %d", &number);
    pritnf(number);

    return 0;
}
