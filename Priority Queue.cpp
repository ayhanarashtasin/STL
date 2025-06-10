#include <bits/stdc++.h>
using namespace std;

int main() {
    // Max-heap priority queue (default)
    priority_queue<int> pq;

    // Insert elements (push, emplace) - O(log n)
    pq.push(50);
    pq.push(20);
    pq.emplace(30);

    // Access the top element (O(1))
    cout << "Top element: " << pq.top() << endl;

    // Remove the top element (pop) - O(log n)
    pq.pop();
    cout << "After pop, new top: " << pq.top() << endl;

    // Check size (O(1))
    cout << "Priority queue size: " << pq.size() << endl;

    // Check if empty (O(1))
    if (pq.empty()) {
        cout << "Priority queue is empty" << endl;
    } else {
        cout << "Priority queue is not empty" << endl;
    }

    // Iterate and print all elements (not directly supported, need to pop)
    cout << "Priority queue elements (from largest to smallest): ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    // Min-heap priority queue (custom comparator)
    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(50);
    min_pq.push(20);
    min_pq.push(30);
    cout << "Min-heap top element: " << min_pq.top() << endl;

    return 0;
}
