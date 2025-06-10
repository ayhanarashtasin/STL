## STL Set and Multiset Time Complexity

This table summarizes the time complexities for common operations on C++ STL `set` and `multiset`. Both containers use balanced binary search trees (typically red-black trees) and provide sorted element storage.

| Operation           | set / multiset | Notes                                         |
|---------------------|:--------------:|-----------------------------------------------|
| insert/emplace      |   O(log n)     | Balanced BST (red-black tree)                 |
| erase (by value)    |   O(log n)     | All occurrences in multiset: O(log n) * k     |
| erase (by iterator) |     O(1)       |                                               |
| find, count         |   O(log n)     |                                               |
| lower/upper_bound   |   O(log n)     |                                               |
| size, empty         |     O(1)       |                                               |
| clear               |     O(n)       |                                               |
| iterate             |     O(n)       |                                               |

### Key Points

- **set**: Stores unique, sorted elements.
- **multiset**: Stores sorted elements, allows duplicates.
- All main operations are O(log n) due to the underlying tree structure.
- Iteration and clearing are linear in the number of elements.

