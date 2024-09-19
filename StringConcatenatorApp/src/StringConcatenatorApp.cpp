#include <iostream>
#include <string>

using namespace std;

int main() {
    // Repeat the process three times
    for (int i = 0; i < 3; ++i) {
        std::string firstString, secondString;

        // Get the first string from the user
        std::cout << "Enter the first string: ";
        std::getline(std::cin, firstString);

        // Get the second string from the user
        std::cout << "Enter the second string: ";
        std::getline(std::cin, secondString);

        // Concatenate the strings
        std::string concatenatedString = firstString + secondString;

        // Print the result
        std::cout << "Concatenated String: " << concatenatedString << std::endl;
        std::cout << "---------------------------------" << std::endl;
    }

    return 0;
}
