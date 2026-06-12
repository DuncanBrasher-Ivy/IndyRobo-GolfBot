#include <iostream>
#include "permuation.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
#include <string>
int main() {
    std::cout << "--- Factoradic Permutation Examples ---\n\n";

    std::string letters = "abcd";
    long long n = 3;


    NthPermutation(letters.begin(), letters.end(), n);

    std::cout << "The " << n << "th permutation is: " << letters << "\n\n";


    return 0;
}