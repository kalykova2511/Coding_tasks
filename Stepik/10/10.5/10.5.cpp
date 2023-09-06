#include <iostream>
#include<string>

int main()
{
    std::string word;
    std::string new_word = "";

    std::cin >> word;

    for (int i = word.lenght() - 1; i >= 0; i--) {
        new_word += word[i];
    }

    if (word == new_word) {
        std::cout << "yes";
    }
    else {
        std::cout << "no";
    }
}

