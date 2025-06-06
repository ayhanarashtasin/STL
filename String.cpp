#include <iostream>
#include <string>
#include <algorithm>  // reverse, find
#include <cctype>     // toupper, tolower

using namespace std;

int main() {
    // ===== 1. String Initializations =====
    
    string s1;                             // Empty string
    string s2("Hello");                   // From C-string
    string s3 = "World";                  // Direct assignment
    string s4(s2);                        // Copy constructor
    string s5(5, 'A');                    // Repeated characters
    const char* cstr = "C-String";
    string s6(cstr);                      // From const char*

    // Print all initializations
    cout << "s1 (empty): \"" << s1 << "\"\n";
    cout << "s2: \"" << s2 << "\"\n";
    cout << "s3: \"" << s3 << "\"\n";
    cout << "s4 (copy of s2): \"" << s4 << "\"\n";
    cout << "s5 (5 A's): \"" << s5 << "\"\n";
    cout << "s6 (from const char*): \"" << s6 << "\"\n";

    // ===== 2. Basic Operations =====

    string str = "hello world";

    // Length and access
    cout << "Length: " << str.length() << "\n";
    cout << "First char: " << str.front() << ", Last char: " << str.back() << "\n";
    cout << "Char at index 1: " << str[1] << "\n";

    // Traversal
    cout << "Characters: ";
    for (char c : str) cout << c << " ";
    cout << "\n";

    // Append and insert
    str += "!";
    str.append(" Welcome");
    str.insert(6, "C++ ");  // Insert at index 6
    cout << "After append/insert: " << str << "\n";

    // Find and replace
    size_t pos = str.find("world");
    if (pos != string::npos)
        str.replace(pos, 5, "everyone");
    cout << "After replace: " << str << "\n";

    // Erase and pop
    str.erase(6, 4);  // Erase "C++ "
    str.pop_back();   // Remove last character
    cout << "After erase/pop: " << str << "\n";

    // Substring
    string sub = str.substr(6, 8);
    cout << "Substring (6,8): " << sub << "\n";

    // Transform to uppercase
    for (char& c : str) c = toupper(c);
    cout << "Uppercase: " << str << "\n";

    // Reverse
    reverse(str.begin(), str.end());
    cout << "Reversed: " << str << "\n";

    // Compare
    string a = "apple", b = "banana";
    if (a < b) cout << "apple < banana (lexicographically)\n";

    // Clear and check
    str.clear();
    cout << "After clear, is empty? " << (str.empty() ? "Yes" : "No") << "\n";

    return 0;
}
