#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector< vector < int > > readInputMatrix(){
  vector< vector < int>  > matrix(5, vector < int > (5));
  for (int i=0; i < 5; i++){
    for (int j=0 ; j < 5; j++){
      cin >> matrix[i][j];
    }
  }
  return matrix;
}

int computeDistanceFromCenter(vector < vector < int > > matrix)
{
  int targetRow = 0;
  int targetCol = 0;
  for (int i=0; i < 5; i++){
    for (int j=0 ; j < 5; j++){
      if (matrix[i][j] == 1){
        targetRow = i;
        targetCol = j;
        break;
      }
    }
  }
  int distance = abs(targetRow - 2) + abs(targetCol - 2);

  return distance;
}

int main()
{
  vector < vector < int> >  matrix = readInputMatrix();
  cout << computeDistanceFromCenter(matrix) << endl;
  return 0;
}
