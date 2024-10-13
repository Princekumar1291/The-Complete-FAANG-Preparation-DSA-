#include <iostream>     // Include the iostream library for input and output
#include <bitset>       // Include the bitset library for bit manipulation
#include <string>       // Include the string library for string manipulation

using namespace std;    // Use the standard namespace to avoid prefixing std::

// Main function
int main() {
    // Initialize a bitset of size 8 with the integer 42 (binary: 00101010)
    bitset<8> b1(7);

    // Initialize another bitset of size 8 with a binary string "101010"
    bitset<8> b2("101010");

    // Output the initial bitset b1
    cout << "Initial bitset: " << b1 << endl;

    // Access and print the 3rd bit of b1 (indexing starts from 0)
    cout << "3rd bit: " << b1[3]<< endl;

    // Set the 5th bit of b1 to 1
    b1.set(5);
    cout << "After setting 5th bit: " << b1 << endl;

    // Reset the 5th bit of b1 to 0
    b1.reset(5);
    cout << "After resetting 5th bit: " << b1 << endl;

    // Flip the 2nd bit of b1 (0 becomes 1, 1 becomes 0)
    b1.flip(2);
    cout << "After flipping 2nd bit: " << b1 << endl;

    // Count and print the number of set bits (1s) in b1
    cout << "Number of set bits: " << b1.count() << endl;

    // Calculate and print the number of unset bits (0s) in b1
    cout << "Number of unset bits: " << b1.size() - b1.count() << endl;

    // Test if the 1st bit of b1 is set (1) and print the result
    cout << "Is 1st bit set? " << b1.test(1) << endl;

    // Convert the bitset b1 to a string and print it
    string bitString = b1.to_string();
    cout << "Bitset as string: " << bitString << endl;

    // Perform a bitwise AND operation between b1 and b2, and store the result in b3
    bitset<8> b3 = b1 & b2;
    cout << "AND with 101010: " << b3 << endl;

    // Perform a left shift operation on b1 by 1 bit and print the result
    bitset<8> leftShifted = b1 << 1;
    cout << "Left shifted by 1: " << leftShifted << endl;

    // Perform a right shift operation on b1 by 1 bit and print the result
    bitset<8> rightShifted = b1 >> 1;
    cout << "Right shifted by 1: " << rightShifted << endl;

    // Return 0 to indicate successful execution
    return 0;
}
