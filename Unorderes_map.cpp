#include <bits/stdc++.h>
using namespace std;

int main() {
    // Create an unordered_map
    unordered_map<int, string> um;

    // Insert elements
    um.insert({1, "one"});         // Average O(1), Worst O(n)[3]
    um[2] = "two";                 // Average O(1), Worst O(n)[3]
    um.emplace(3, "three");        // Average O(1), Worst O(n)[3]

    // Access elements
    cout << "Element at key 1: " << um[1] << endl;    // Average O(1), Worst O(n)[3]
    cout << "Element at key 2: " << um.at(2) << endl; // Average O(1), Worst O(n)[3]

    // Check if key exists
    if (um.find(4) == um.end()) {                     // Average O(1), Worst O(n)[3]
        cout << "Key 4 not found" << endl;
    }

    // Size of unordered_map
    cout << "Size: " << um.size() << endl;            // O(1)[3]

    // Iterate over unordered_map
    cout << "Elements:" << endl;
    for (auto &p : um) {                              // O(n)[3]
        cout << p.first << " -> " << p.second << endl;
    }

    // Erase element by key
    um.erase(2);                                      // Average O(1), Worst O(n)[3]
    cout << "After erasing key 2:" << endl;
    for (auto &p : um) {
        cout << p.first << " -> " << p.second << endl;
    }

    // Clear unordered_map
    um.clear();                                       // O(n)[3]
    cout << "Size after clear: " << um.size() << endl;

    return 0;
}
