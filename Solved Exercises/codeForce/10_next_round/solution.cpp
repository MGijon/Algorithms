#include <iostream>
#include <string>
#include <vector>

std::vector<std::vector<int> > readInput() {
  int n, k;
  std::cin >> n >> k;

  std::vector<int> scores(n);
  for (int i = 0; i < n; i++)
    std::cin >> scores[i];

  return {std::vector<int>{n, k}, scores};
}

int main()
{
  std::vector<std::vector<int> > inputValues = readInput();
  int n = inputValues[0][0];
  int k = inputValues[0][1];
  std::vector<int> scores = inputValues[1];

  int threshold = scores[k-1];
  int counter = 0;
  for (int i=0; i < n; i++){
    if (scores[i] >= threshold && scores[i] > 0){ counter++; }
    else { break; }
  }
  std::cout << counter << std::endl;

  return 0;
}
