#include <iostream>

using namespace std;

int computeMaxNumberDominoes(int m, int n){
  return (m * n) / 2;
}

int main()
{
  int m, n;
  cin >> m >> n;

  cout << computeMaxNumberDominoes(m, n) << endl;
  return 0;
}
