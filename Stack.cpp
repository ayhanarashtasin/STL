#include <bits/stdc++.h>
using namespace std;

int main() {
    // Create a stack
    stack<int> st;

    // Push elements (O(1))
    st.push(10);
    st.push(20);
    st.push(30);

    // Access the top element (O(1))
    cout << "Top element: " << st.top() << endl;

    // Pop an element (O(1))
    st.pop();
    cout << "After pop, top element: " << st.top() << endl;

    // Check size (O(1))
    cout << "Stack size: " << st.size() << endl;

    // Check if stack is empty (O(1))
    if (st.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    // Iterate and print all elements (not directly supported, need to pop)
    cout << "Stack elements (from top to bottom): ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
