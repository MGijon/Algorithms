#include <iostream>
#include <string>
#include <vector>

std::vector<std::vector<int> > readInput() {
    int n;
    // The first line of input contains an integer n, the number of cases
    std::cin >> n;
    // cases is a vector of n vectors, each containing 4 integers
    std::vector<std::vector<int> > cases(
        n, 
        std::vector<int>(4)
    );

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cin >> cases[i][j];
        }
    }
    return cases;
}

int main()
{
    std::vector<std::vector<int> > cases = readInput();

    for (int i = 0; i < (int)cases.size(); ++i) {
        // For each case...
        int TimursDistance = cases[i][0];
        int counter = 0;

        for (int j = 1; j < 4; ++j) {
            if (cases[i][j] > TimursDistance) {
                counter++;
            }
        }
        std::cout << counter << std::endl;
        counter = 0;
    }

    return 0;
}
