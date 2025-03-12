/*
A. Boy or Girl
time limit per test1 second
memory limit per test256 megabytes
Those days, many boys use beautiful girls' photos as avatars in forums. So it is pretty hard to tell the gender of a user at the first glance. Last year, our hero went to a forum and had a nice chat with a beauty (he thought so). After that they talked very often and eventually they became a couple in the network.

But yesterday, he came to see "her" in the real world and found out "she" is actually a very strong man! Our hero is very sad and he is too tired to love again now. So he came up with a way to recognize users' genders by their user names.

This is his method: if the number of distinct characters in one's user name is odd, then he is a male, otherwise she is a female. You are given the string that denotes the user name, please help our hero to determine the gender of this user by his method.

Input
The first line contains a non-empty string, that contains only lowercase English letters — the user name. This string contains at most 100 letters.

Output
If it is a female by our hero's method, print "CHAT WITH HER!" (without the quotes), otherwise, print "IGNORE HIM!" (without the quotes).
*/
#include <iostream>
#include <map>
using namespace std;

int main(){
  // CIN takes any space (whitespace, tabs, etc) as terminating character
  string inputString;
  getline(cin, inputString);
  //cout << inputString << endl;

  map<char, int> dict;  // this will be my dictionary
  
  // init the map, this is the lamest way possible beceause we have to
  // iterate twice...
  for (int i =0; i < inputString.size(); i++){
    dict[inputString[i]] = 0;
  }

  for (int i = 0; i < inputString.size(); i++){
    dict[inputString[i]] ++;
  }
  
  int numberDifferentCharacters = 0;
  for (const auto& element: dict){
    //cout << element.first << " : " << element.second << endl;
    numberDifferentCharacters++;
  }

  if (numberDifferentCharacters % 2 == 1){  
    cout << "IGNORE HIM!";
  } else {
    cout << "CHAT WITH HER!";
  }
  // https://medium.com/@ryan_forrester_/how-to-iterate-through-a-map-in-c-8aa459ea8bc5
}
