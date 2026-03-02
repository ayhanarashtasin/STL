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
