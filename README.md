# C++ STL Time Complexity Cheat Sheet

This README provides a comprehensive table of time complexities for the most important C++ STL containers and utilities: **Vector, String, Map, Unordered Map, Set, Multiset, Pair, Sorting with Comparators, Stack, Queue, and Priority Queue**.

---

## Vector

| Operation            | Time Complexity | Notes                                                         |
|----------------------|:--------------:|---------------------------------------------------------------|
| Access (at, [ ])     |     O(1)       |                                                               |
| front(), back()      |     O(1)       |                                                               |
| push_back()          |  Amortized O(1)| May trigger reallocation                                      |
| pop_back()           |     O(1)       |                                                               |
| insert(), erase()    |     O(N)       | Insert/erase at arbitrary position; O(1) at end for pop_back  |
| clear()              |     O(N)       |                                                               |
| size(), empty()      |     O(1)       |                                                               |
| begin(), end()       |     O(1)       |                                                               |
| resize()             |     O(N)       |                                                               |

---

## String

| Operation             | Time Complexity | Notes                                                |
|-----------------------|:--------------:|------------------------------------------------------|
| Access (at, [ ])      |     O(1)       |                                                      |
| append(), push_back() |     O(N)       | N = size of new string                               |
| compare()             |   O(N + M)     | N, M = sizes of compared strings                     |
| find(), substr()      |     O(N)       | N = size of string or substring                      |
| insert(), erase()     |     O(N)       | N = size of new string                               |
| replace(), resize()   |     O(N)       | N = size of new string                               |
| clear(), empty(), size() |  O(1)       |                                                      |
| c_str(), data()       |     O(1)       |                                                      |
| begin(), end()        |     O(1)       |                                                      |

---

## Map

| Operation           | Time Complexity | Notes                                      |
|---------------------|:--------------:|--------------------------------------------|
| insert(), emplace() |    O(log n)    | Red-black tree                             |
| erase(key)          |    O(log n)    |                                            |
| find(), count()     |    O(log n)    |                                            |
| operator[], at()    |    O(log n)    |                                            |
| lower/upper_bound() |    O(log n)    |                                            |
| clear()             |      O(n)      |                                            |
| size(), empty()     |      O(1)      |                                            |
| iterate             |      O(n)      |                                            |

---

## Unordered Map

| Operation           | Avg. Time | Worst Time | Notes                                    |
|---------------------|:---------:|:----------:|------------------------------------------|
| insert(), emplace() |   O(1)    |   O(n)     | Hash table; worst case: many collisions  |
| erase(key)          |   O(1)    |   O(n)     |                                          |
| find(), count()     |   O(1)    |   O(n)     |                                          |
| operator[], at()    |   O(1)    |   O(n)     |                                          |
| clear()             |   O(n)    |   O(n)     |                                          |
| size(), empty()     |   O(1)    |   O(1)     |                                          |
| iterate             |   O(n)    |   O(n)     |                                          |

---

## Set and Multiset

| Operation           | set/multiset | Notes                                           |
|---------------------|:------------:|-------------------------------------------------|
| insert(), emplace() |   O(log n)   | Red-black tree                                  |
| erase(value)        |   O(log n)   | All occurrences in multiset: O(log n) * count   |
| erase(iterator)     |     O(1)     |                                                 |
| find(), count()     |   O(log n)   |                                                 |
| lower/upper_bound() |   O(log n)   |                                                 |
| clear()             |     O(n)     |                                                 |
| size(), empty()     |     O(1)     |                                                 |
| iterate             |     O(n)     |                                                 |

---

## STL Pair and Comparator Sorting

| Operation              | Time Complexity | Notes                                  |
|------------------------|:--------------:|----------------------------------------|
| Access first/second    |     O(1)       | Direct member access                   |
| make_pair()            |     O(1)       |                                        |
| Comparison (operator<) |     O(1)       | Lexicographical                        |
| sort (default)         |   O(n log n)   | std::sort for vector/array of pairs    |
| sort (custom comp)     |   O(n log n)   | std::sort with lambda/functor          |

---

## Stack

| Operation    | Time Complexity | Notes                        |
|--------------|:--------------:|------------------------------|
| push()       |     O(1)       |                              |
| pop()        |     O(1)       |                              |
| top()        |     O(1)       |                              |
| size()       |     O(1)       |                              |
| empty()      |     O(1)       |                              |

---

## Queue

| Operation    | Time Complexity | Notes                        |
|--------------|:--------------:|------------------------------|
| push()       |     O(1)       | enqueue                      |
| pop()        |     O(1)       | dequeue                      |
| front(), back() |  O(1)       |                              |
| size()       |     O(1)       |                              |
| empty()      |     O(1)       |                              |

---

## Priority Queue

| Operation    | Time Complexity | Notes                        |
|--------------|:--------------:|------------------------------|
| push()       |   O(log n)     | insert                       |
| pop()        |   O(log n)     | remove top                   |
| top()        |     O(1)       | access top                   |
| size()       |     O(1)       |                              |
| empty()      |     O(1)       |                              |
| build from n elements | O(n)  | heapify                      |


