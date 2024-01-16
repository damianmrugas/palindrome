/*

C++ program to check if a word is a palindrome.

*/

#include <iostream>
#include <string>

bool palindrome(std::string &word) {

    int length = word.length();

    for (int i = 0; i < length; i++) {

        if (word[i] != word[length - i - 1]) {
            return false;
        };

    };

    return true;

};

int main(void) {

    std::string word;

    std::cout << ".:: PALINDROME ::." << "\n";

    std::cout << "Enter a word: ";
    std::cin >> word;

    if (palindrome(word)) {
        std::cout << word << " is a palindrome!" << "\n";
    } else {
        std::cout << word << " is NOT a palindrome!" << "\n";
    };

};