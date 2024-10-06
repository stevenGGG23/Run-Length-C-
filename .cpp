#include <iostream>
#include <string>

int main() {
    std::string compress;
    
    // Prompt user for input
    std::cout << "Enter text to compress: ";
    std::getline(std::cin, compress);  // Use getline to capture the entire line, including spaces
    
    // Check if the string is empty or contains only whitespace
    if (compress.empty()) {
        std::cout << "The input string is empty!" << std::endl;
        return 1;  // Exit the program if no input is provided
    }
    
    // Variables for the current character and its count
    char currentChar = compress[0];
    int count = 1;

    // Loop through the string starting from the second character
    for (size_t i = 1; i < compress.length(); ++i) {
        if (compress[i] == currentChar) {
            count++;  // Increment the count if the character is the same
        } else {
            // Print the count and the character
            std::cout << count << currentChar;
            
            // Update count and set the current character to the new character
            currentChar = compress[i];
            count = 1;  // Reset count for the new character
        }
    }
    
    // Final output for the last character and its count
    std::cout << count << currentChar << std::endl;
    
    return 0;
}
