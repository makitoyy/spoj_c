#include <iostream>
#include <vector>
#include <algorithm>

void generatePermutations(int k)
 {
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::string subset = alphabet.substr(0, k);
    std::sort(subset.begin(), subset.end());
    do 
    {
        std::cout << subset << std::endl;
    } while (std::next_permutation(subset.begin(), subset.end()));
}

int main() {
    int t;
    std::cin >> t;
    std::vector<int> test_cases(t);
    
    for (int i = 0; i < t; ++i) 
    {
        std::cin >> test_cases[i];
    }

    for (int i = 0; i < t; ++i) 
    {
        generatePermutations(test_cases[i]);
        if (i != t - 1) {
            std::cout << std::endl; // Print a newline between different test cases
        }
    }

    return 0;
}
