/*
A. Word Capitalization
time limit per test2 seconds
memory limit per test256 megabytes
Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

Input
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.

Output
Output the given word after capitalization.
*/
#include <iostream>
#include <cctype>
using namespace std;

int main(){
  string inputString;
  getline(cin, inputString);
  
  cout << toupper(inputString[0]);
  //cout << toupper(inputString);
  return 0;
}

