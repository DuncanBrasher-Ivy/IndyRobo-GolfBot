#include <iostream>
#include "permuation.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
#include <string>

void print_vector(std::pmr::vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    std::cout << "--- Factoradic Permutation Examples ---\n\n";

    std::string letters = "abcd";
    long long n = 3;


    NthPermutation(letters.begin(), letters.end(), n);

    std::cout << "The " << n << "th permutation is: " << letters << "\n\n";


    std::pmr::vector<int> v = {1, 2, 3, 4, 5};
    std::cout << "The 3rd permutation of";
    print_vector(v);
    std::cout << "is: ";
    NthPermutation(v.begin(), v.end(), 3);
    print_vector(v);
    return 0;
}

