* Filename: runlength.cpp
* Description:program that will ask the user to enter a line of text to be compressed. Iterate over the string from beginning to end. For each
character in the string, if the character is the same as the previous one then increment a counter,
otherwise print out the previous count and character before resetting the counter. When you run out
of characters in the string make sure you've output the final pair.
*/  

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
    
    // Variables, current character, and the count
    char currentChar = compress[0];
    int count = 1;

    // Use size_t for the loop index to avoid the signed-unsigned comparison warning
    for (size_t i = 1; i < compress.length(); ++i) {
        if (compress[i] == currentChar) {
    
            count++;
        } else {
            // Print the count and the characters
            std::cout << count << currentChar;
            
            // Update count and set the current character to the new character
            currentChar = compress[i];
            count = 1;
        }
    }
    
    // Final output for the last character and its count
    std::cout << count << currentChar << std::endl;
    
    return 0;
}

