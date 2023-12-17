#include <stdio.h>

// Function to convert decimal to binary using recursion
void decimalToBinary(int n) {
    // Base case: if the number is 0, the binary representation is also 0
    if (n == 0) {
        return;
    } else {
        // Recursive case: divide the number by 2 and recursively call the function
        decimalToBinary(n / 2);
        
        // Print the remainder (0 or 1) at each step
        printf("%d", n % 2);
    }
}

int main() {
    int decimalNumber = 25;
    
    // Display a message
    printf("The binary equivalent of %d is: ", decimalNumber);
    
    // Call the recursive function to convert and print the binary representation
    decimalToBinary(decimalNumber);
    
    // Return 0 to indicate successful execution
    return 0;
}
