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

/**
 * Output the number of steps to make the base number divisible by the divisor.
 * @param base: base number
 * @param divisor: divisor number
 * @return void
 */
void outputNumberSteps(int base, int divisor)
{
  if (base % divisor == 0)
  {
    cout << 0 << endl;
  }
  else
  {
    cout << divisor - (base % divisor) << endl;
  }
}

int main()
{
  string line;
  int lineCounter = 0;
  while (getline(cin, line))
  {
    if (lineCounter != 0)
    {
      vector<int> numbers = splitString(line);
      outputNumberSteps(numbers[0], numbers[1]);
    }
    lineCounter += 1;
  }
  return 0;
}
