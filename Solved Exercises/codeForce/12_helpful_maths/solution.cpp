#include <iostream>
#include <string>
using namespace std;

int main()
{
  string line;
  getline(cin, line); // get the line into the program
  int numberOfOnes = 0;
  int numberOfTwos = 0;
  int numberOfThrees = 0;

  // range-based look
  //for (char& c: line){
  for (int i = 0; i < line.length(); i++){
    // Is this necessary?
    if (line[i] == '+') {
      line[i] = ' ';
    }

    if (line[i] == '1') {
      numberOfOnes++;
    } else if (line[i] == '2') {
      numberOfTwos++;
    } else if (line[i] == '3') {
      numberOfThrees++;
    }
  } 

  string outputLine;
  for (int i = 0; i < numberOfOnes; i++) {
    outputLine += "1+";
  }
  
  for (int i = 0; i < numberOfTwos; i++) {
    outputLine += "2+";
  }
  for (int i = 0; i < numberOfThrees; i++) {
    outputLine += "3+";
  }
  cout << outputLine.substr(0, outputLine.length() - 1) << endl; // print the sorted line

  return 0;
}
