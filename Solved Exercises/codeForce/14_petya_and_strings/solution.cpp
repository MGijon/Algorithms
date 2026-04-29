#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s1, s2;
  cin >> s1 >> s2;

  int counter = 0;

  for (int i = 0; i < s1.size(); i++){
    if (tolower(s1[i]) == tolower(s2[i])){
      counter++;
    } else if (tolower(s1[i]) < tolower(s2[i])){
      cout << -1;
      break;
    } else {
      cout << 1;
      break;
    }
  }

  // Probably the worts way to do it...
  if (counter == s1.size()){
    cout << 0;
  }
  return 0;
}
