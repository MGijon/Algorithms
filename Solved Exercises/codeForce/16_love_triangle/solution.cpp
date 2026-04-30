#include <iostream>
#include <string>
#include <vector>

bool isLoveTriangle(std::vector<int> a) {
  for (int i = 0; i < a.size(); i++){
    int j = a[i] - 1;
    int k = a[j] - 1;
    if (a[k] - 1 == i && i != j && j != k && k != i){
      return true;
    }
  }
  return false;
}

int main()
{
  int n;
  std::cin >> n;
  std::vector<int> a(n);
  for (int i = 0; i < n; i++){
    std::cin >> a[i]; 
  }
  if (isLoveTriangle(a)){
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
  return 0;
}
