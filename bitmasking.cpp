#include <bits/stdc++.h>
using namespace std;

int main() {

    cout << "===== BITMASKING COMPLETE DEMO =====\n\n";
    int countBits(int num) {
      return __builtin_popcount(num);
    }

    // --------------------------------------------------
    // 1) Swapping Two Numbers (XOR Trick)
    // --------------------------------------------------
    int a = 5, b = 3;
    cout << "1) Swapping using XOR\n";
    cout << "Before Swap: a = " << a << ", b = " << b << endl;

    a ^= b;
    b ^= a;
    a ^= b;

    cout << "After Swap:  a = " << a << ", b = " << b << endl;
    cout << "-------------------------------------\n\n";


    // --------------------------------------------------
    // 2) Check i-th bit is set
    // --------------------------------------------------
    int num = 10; // 1010
    int i = 1;

    cout << "2) Check i-th bit is set\n";
    cout << "Number: " << num << ", i = " << i << endl;

    if (num & (1 << i))
        cout << "Bit is SET\n";
    else
        cout << "Bit is NOT SET\n";

    cout << "-------------------------------------\n\n";


    // --------------------------------------------------
    // 3) Set i-th bit
    // --------------------------------------------------
    cout << "3) Set i-th bit\n";
    cout << "Before: " << num << endl;
    num |= (1 << i);
    cout << "After:  " << num << endl;
    cout << "-------------------------------------\n\n";


    // --------------------------------------------------
    // 4) Clear i-th bit
    // --------------------------------------------------
    cout << "4) Clear i-th bit\n";
    cout << "Before: " << num << endl;
    num &= ~(1 << i);
    cout << "After:  " << num << endl;
    cout << "-------------------------------------\n\n";


    // --------------------------------------------------
    // 5) Toggle i-th bit
    // --------------------------------------------------
    cout << "5) Toggle i-th bit\n";
    cout << "Before: " << num << endl;
    num ^= (1 << i);
    cout << "After:  " << num << endl;
    cout << "-------------------------------------\n\n";


    // --------------------------------------------------
    // 6) Remove Rightmost Set Bit
    // --------------------------------------------------
    int x = 12; // 1100
    cout << "6) Remove Rightmost Set Bit\n";
    cout << "Before: " << x << endl;
    x &= (x - 1);
    cout << "After:  " << x << endl;
    cout << "-------------------------------------\n\n";


    // --------------------------------------------------
    // 7) Check Power of 2
    // --------------------------------------------------
    int p = 16;
    cout << "7) Check Power of 2\n";
    if (p > 0 && (p & (p - 1)) == 0)
        cout << p << " is Power of 2\n";
    else
        cout << p << " is NOT Power of 2\n";

    cout << "-------------------------------------\n\n";


    // --------------------------------------------------
    // 8) Check Odd or Even
    // --------------------------------------------------
    int y = 7;
    cout << "8) Check Odd or Even\n";
    if (y & 1)
        cout << y << " is Odd\n";
    else
        cout << y << " is Even\n";

    cout << "-------------------------------------\n\n";


    // --------------------------------------------------
    // 9) Divide by 2 (Right Shift)
    // --------------------------------------------------
    int z = 8;
    cout << "9) Divide by 2 using Right Shift\n";
    cout << "Before: " << z << endl;
    z >>= 1;
    cout << "After:  " << z << endl;

    cout << "-------------------------------------\n\n";


    // --------------------------------------------------
    // 10) Count Set Bits (Built-in)
    // --------------------------------------------------
    int m = 29; // 11101
    cout << "10) Count Set Bits (Built-in)\n";
    cout << "Number: " << m << endl;
    cout << "Set bits = " << __builtin_popcount(m) << endl;

    cout << "-------------------------------------\n\n";


    // --------------------------------------------------
    // 11) Count Set Bits (Manual - Brian Kernighan)
    // --------------------------------------------------
    int n = 29;
    int count = 0;
    int temp = n;

    while (temp) {
        temp &= (temp - 1);
        count++;
    }

    cout << "11) Count Set Bits (Manual)\n";
    cout << "Number: " << n << endl;
    cout << "Set bits = " << count << endl;

    cout << "\n===== END =====\n";

    return 0;
}
//----------------------------------------------------------
#include <iostream>
#include <bitset>

using namespace std;

// A quick helper function to print numbers in 8-bit binary for visual reference
void printBinary(string label, int val) {
    cout << label << ": " << bitset<8>(val) << " (Value: " << val << ")\n";
}

int main() {
    cout << "========== 1. GCC BUILT-IN FUNCTIONS ==========\n";
    int x = 12; // Binary: 00001100
    printBinary("Initial x", x);
    
    // Count the number of 1-bits
    cout << "Popcount (number of 1s): " << __builtin_popcount(x) << "\n";
    
    // Find the position of the lowest 1-bit (0-indexed)
    cout << "Lowest 1-bit position (Trailing Zeros): " << __builtin_ctz(x) << "\n";
    
    // Find the position of the lowest 0-bit
    cout << "Lowest 0-bit position: " << __builtin_ctz(~x) << "\n";
    
    // Count the number of leading zeros (Assuming 32-bit integer)
    cout << "Leading zeros (32-bit int): " << __builtin_clz(x) << "\n";


    cout << "\n========== 2. CLASSIC BIT MANIPULATION ==========\n";
    int y = 12; // Binary: 00001100
    printBinary("Initial y", y);

    // Turn off the lowest 1-bit
    printBinary("y & (y - 1) [Turn off lowest 1-bit]", y & (y - 1));

    // Isolate the lowest 1-bit
    printBinary("y & -y [Isolate lowest 1-bit]", y & -y);

    // Set the lowest 0-bit to 1
    printBinary("y | (y + 1) [Set lowest 0-bit to 1]", y | (y + 1));

    // Check if a number is a power of 2
    int p = 16;
    bool isPowerOfTwo = (p > 0) && ((p & (p - 1)) == 0);
    cout << "Is 16 a power of 2? " << (isPowerOfTwo ? "Yes" : "No") << "\n";


    cout << "\n========== 3. MODIFYING SPECIFIC BITS ==========\n";
    int z = 10; // Binary: 00001010
    int i = 2;  // We will target the 2nd bit (0-indexed, so the 3rd bit from the right)
    printBinary("Initial z", z);
    cout << "Target bit position (i): " << i << "\n";

    // Check if the i-th bit is set
    bool isSet = (z >> i) & 1;
    cout << "Is the " << i << "-th bit set? " << (isSet ? "Yes" : "No") << "\n";

    // Turn ON the i-th bit
    printBinary("z | (1 << i) [Turn ON i-th bit]", z | (1 << i));

    // Turn OFF the i-th bit
    printBinary("z & ~(1 << i) [Turn OFF i-th bit]", z & ~(1 << i));

    // Toggle (flip) the i-th bit
    printBinary("z ^ (1 << i) [Toggle i-th bit]", z ^ (1 << i));


    cout << "\n========== 4. XOR SWAP ==========\n";
    int a = 5, b = 9;
    cout << "Before swap: a = " << a << ", b = " << b << "\n";
    
    a ^= b;
    b ^= a;
    a ^= b;
    
    cout << "After swap:  a = " << a << ", b = " << b << "\n";

    return 0;
}
