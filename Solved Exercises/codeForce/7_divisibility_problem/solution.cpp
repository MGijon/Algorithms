#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * Split a string into a vector of integers.
 * @param line: string to split
 * @return vector<int>: vector of integers
 */
vector<int> splitString(string line)
{
  vector<int> v;
  string temp = "";
  for (int i = 0; i < line.size(); i++)
  {
    if (line[i] == ' ')
    {
      v.push_back(stoi(temp)); // push_back: add element to the end of the vector
      temp = "";
    }
    else
    {
      temp += line[i];
    }
  }
  v.push_back(stoi(temp)); // stoi: string to integer
  return v;
};

int main()
{
  string line;
  int lineCounter = 0;
  while (getline(cin, line))
  {
    if (lineCounter != 0)
    {
      vector<int> numbers = splitString(line);
      int base = numbers[0];
      int divisor = numbers[1];

      int number_of_steps = 0;

      while (base % divisor != 0)
      {
        base += 1;
        number_of_steps += 1;
      }
      cout << number_of_steps << endl;
    }
    lineCounter += 1;
  }
  return 0;
}
