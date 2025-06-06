#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    // ===== 1. Vector Initializations =====
    
    vector<int> v1;                                // Empty vector
    vector<int> v2(5);                             // 5 elements initialized to 0
    vector<int> v3(5, 10);                         // 5 elements initialized to 10
    vector<int> v4 = {1, 2, 3, 4, 5};              // Initializer list
    vector<int> v5(v4);                            // Copy constructor
    vector<int> v6(v4.begin(), v4.begin() + 3);    // Range constructor
    int arr[] = {7, 8, 9};
    vector<int> v7(arr, arr + 3);                  // From array

    // Print all initializations
    cout << "v1 (empty): size = " << v1.size() << "\n";
    cout << "v2 (5 zeros): "; for (int x : v2) cout << x << " "; cout << "\n";
    cout << "v3 (5 tens): "; for (int x : v3) cout << x << " "; cout << "\n";
    cout << "v4 (init list): "; for (int x : v4) cout << x << " "; cout << "\n";
    cout << "v5 (copy of v4): "; for (int x : v5) cout << x << " "; cout << "\n";
    cout << "v6 (first 3 of v4): "; for (int x : v6) cout << x << " "; cout << "\n";
    cout << "v7 (from array): "; for (int x : v7) cout << x << " "; cout << "\n";

    // ===== 2. Basic Operations =====

    vector<int> v = {5, 2, 9, 1, 5, 6};

    v.push_back(10);               // Add at end
    v.insert(v.begin() + 2, 7);    // Insert at index 2
    cout << "Front: " << v.front() << ", Back: " << v.back() << ", At[3]: " << v[3] << "\n";

    // Traverse
    cout << "Elements: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    // Sort and reverse
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    // Find
    auto it = find(v.begin(), v.end(), 5);
    if (it != v.end())
        cout << "Found 5 at index: " << it - v.begin() << "\n";

    // Remove
    v.erase(v.begin() + 1);
    v.pop_back();

    // Size, capacity
    cout << "Size: " << v.size() << ", Capacity: " << v.capacity() << "\n";

    // Sum
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "Sum: " << sum << "\n";

    // Clear
    v.clear();
    cout << "Is vector empty? " << (v.empty() ? "Yes" : "No") << "\n";

    return 0;
}
