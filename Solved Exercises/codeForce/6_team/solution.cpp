/*
A. Team
time limit per test2 seconds
memory limit per test256 megabytes
One day three best friends Petya, Vasya and Tonya decided to form a team and take part in programming contests. Participants are usually offered several problems during programming contests. Long before the start the friends decided that they will implement a problem if at least two of them are sure about the solution. Otherwise, the friends won't write the problem's solution.

This contest offers n problems to the participants. For each problem we know, which friend is sure about the solution. Help the friends find the number of problems for which they will write a solution.

Input
The first input line contains a single integer n (1 ≤ n ≤ 1000) — the number of problems in the contest. Then n lines contain three integers each, each integer is either 0 or 1. If the first number in the line equals 1, then Petya is sure about the problem's solution, otherwise he isn't sure. The second number shows Vasya's view on the solution, the third number shows Tonya's view. The numbers on the lines are separated by spaces.

Output
Print a single integer — the number of problems the friends will implement on the contest.

Note
In the first sample Petya and Vasya are sure that they know how to solve the first problem and all three of them know how to solve the second problem. That means that they will write solutions for these problems. Only Petya is sure about the solution for the third problem, but that isn't enough, so the friends won't take it.

In the second sample the friends will only implement the second problem, as Vasya and Tonya are sure about the solution.
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
  string line;
  int lineCounter = 0;
  int total_problems_solved = 0;

  while(getline(cin, line)){
    if (lineCounter != 0){
      char petya_answer = line[0];
      char vasya_answer = line[2];
      char tonya_answer = line[4];
      
      int petya_answer_int = petya_answer - '0';  // this substract the asci value of 0 (48) so we have it done
      int vasya_answer_int = vasya_answer - '0';
      int tonya_answer_int = tonya_answer - '0';
  
      if (
          petya_answer_int + vasya_answer_int + tonya_answer_int >= 2
         ){
          total_problems_solved += 1;      
      }

    }
    lineCounter += 1;
  }
  cout << total_problems_solved << endl;

  return 0;
}


