#include <iostream>
#include <string>
#include <vector>

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
  int YakkosResult;
  int WakkosResult;

  while (getline(cin, line)){
    YakkosResult = returnTwoNumbers(line)[1];
    WakkosResult = returnTwoNumbers(line)[0];
  }
  int maxResult = std::max(YakkosResult, WakkosResult);

  if (maxResult == 1) {
    cout << "1/1" << endl;
  } else if (maxResult == 2) {
    cout << "5/6" << endl;
  } else if (maxResult == 3) {
    cout << "2/3" << endl;
  } else if (maxResult == 4) {
    cout << "1/2" << endl;
  } else if (maxResult == 5) {
    cout << "1/3" << endl; 
  } else if (maxResult == 6) {
    cout << "1/6" << endl;
  }; 
  


  return 0;
}
