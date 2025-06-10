#include <bits/stdc++.h>
using namespace std;

int main() {
    // Create a map
    map<int, string> m;

    // Insert elements
    m.insert({1, "one"});
    m[2] = "two";
    m.emplace(3, "three");

    // Access elements
    cout << "Element at key 1: " << m[1] << endl;
    cout << "Element at key 2: " << m.at(2) << endl;

    // Check if key exists
    if (m.find(4) == m.end()) {
        cout << "Key 4 not found" << endl;
    }

    // Size of map
    cout << "Size of map: " << m.size() << endl;

    // Iterate over map
    cout << "Map elements:" << endl;
    for (auto &p : m) {
        cout << p.first << " -> " << p.second << endl;
    }

    // Erase element by key
    m.erase(2);
    cout << "After erasing key 2:" << endl;
    for (auto &p : m) {
        cout << p.first << " -> " << p.second << endl;
    }

    // Clear map
    m.clear();
    cout << "Size after clear: " << m.size() << endl;

    return 0;
}
