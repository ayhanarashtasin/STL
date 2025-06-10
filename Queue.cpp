#include <bits/stdc++.h>
using namespace std;

int main() {
    // Create a queue
    queue<int> q;

    // Push elements (enqueue) (O(1))
    q.push(10);
    q.push(20);
    q.push(30);

    // Access the front element (O(1))
    cout << "Front element: " << q.front() << endl;

    // Access the back element (O(1))
    cout << "Back element: " << q.back() << endl;

    // Pop an element (dequeue) (O(1))
    q.pop();
    cout << "After pop, new front: " << q.front() << endl;

    // Check size (O(1))
    cout << "Queue size: " << q.size() << endl;

    // Check if queue is empty (O(1))
    if (q.empty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    // Iterate and print all elements (not directly supported, need to pop)
    cout << "Queue elements (from front to back): ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
