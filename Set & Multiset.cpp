#include <bits/stdc++.h>
using namespace std;

int main() {
    // --- SET OPERATIONS ---
    set<int> s;

    // Insert elements (O(log n))
    s.insert(5);
    s.insert(1);
    s.insert(3);

    // Emplace (O(log n))
    s.emplace(4);

    // Find element (O(log n))
    auto it = s.find(3);
    if (it != s.end()) cout << "3 found in set\n";

    // Count (O(log n)), returns 1 if present, 0 otherwise
    cout << "Count of 4: " << s.count(4) << endl;

    // Erase by value (O(log n))
    s.erase(1);

    // Erase by iterator (O(1))
    if (!s.empty()) s.erase(s.begin());

    // Iterate (O(n))
    cout << "Set elements: ";
    for (int x : s) cout << x << " ";
    cout << endl;

    // Size (O(1))
    cout << "Set size: " << s.size() << endl;

    // Lower and upper bound (O(log n))
    auto lb = s.lower_bound(3);
    auto ub = s.upper_bound(3);

    // Clear (O(n))
    s.clear();

    // --- MULTISET OPERATIONS ---
    multiset<int> ms;

    // Insert elements (O(log n)), allows duplicates
    ms.insert(5);
    ms.insert(1);
    ms.insert(3);
    ms.insert(3);

    // Emplace (O(log n))
    ms.emplace(4);

    // Find element (O(log n)), returns iterator to first occurrence
    auto mit = ms.find(3);

    // Count (O(log n)), returns number of occurrences
    cout << "Count of 3 in multiset: " << ms.count(3) << endl;

    // Erase by value (O(log n) * count), erases all occurrences
    ms.erase(3);

    // Erase by iterator (O(1))
    if (!ms.empty()) ms.erase(ms.begin());

    // Iterate (O(n))
    cout << "Multiset elements: ";
    for (int x : ms) cout << x << " ";
    cout << endl;

    // Size (O(1))
    cout << "Multiset size: " << ms.size() << endl;

    // Lower and upper bound (O(log n))
    auto mlb = ms.lower_bound(4);
    auto mub = ms.upper_bound(4);

    // Clear (O(n))
    ms.clear();

    return 0;
}
