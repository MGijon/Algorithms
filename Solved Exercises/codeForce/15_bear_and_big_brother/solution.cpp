#include <iostream>
#include <string>

int main()
{
  int bear1Weight, bear2Weight;  
  std::cin >> bear1Weight >> bear2Weight;

  int years = 0;
  while ((bear1Weight <= bear2Weight) && (years <= 100))
  {
    bear1Weight *= 3;
    bear2Weight *= 2;
    years++;
  }

  std::cout << years << std::endl;
  return 0;
}
