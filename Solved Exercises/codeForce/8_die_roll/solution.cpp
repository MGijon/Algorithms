#include <iostream>
#include <string>

using namespace std;

vector<int> returnTwoNumbers(string line){
  vector<int> twoNumbers;

  twoNumbers.push_back(line[0] - '0');  // we can do it like these only because in this case numbers < 10, one digit
  twoNumbers.push_back(line[2] - '0');
  return twoNumbers;
} 

int main()
{
  string line; 
  int numerator;
  int denominator;

  while (getline(cin, line)){
    numerator = returnTwoNumbers(line)[1];
    denominator = returnTwoNumbers(line)[0];
  }
  if (
      (numerator % 2) && (denominator % 2) 
     ){
    numerator = numerator / 2;
    denominator = denominator / 2;
  }
  string output = buildIrreducibleFraction(numerator, denominator);
  cout << output << endl;

  return 0;
}
