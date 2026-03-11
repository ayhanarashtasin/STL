/*
---------------------------------------------
Competitive Programming Template (PBDS)
Author: Ayhan Arash Tasin
---------------------------------------------
Features:
1. Fast IO
2. Ordered Set
3. Ordered Multiset (duplicates)
4. Common Macros
---------------------------------------------
*/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

/* ---------------- Fast IO ---------------- */
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

/* ---------------- Macros ---------------- */
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

/* ---------------- Ordered Set ----------------
   - No duplicates
   - find_by_order(k) -> k-th smallest element (0-indexed)
   - order_of_key(x)  -> number of elements < x
------------------------------------------------*/

template<typename T>
using ordered_set = tree<
    T,
    null_type,
    less<T>,
    rb_tree_tag,
    tree_order_statistics_node_update
>;

/* ---------------- Ordered Multiset ----------------
   - Supports duplicates
   - store pair<value, unique_id>
----------------------------------------------------*/

template<typename T>
using ordered_multiset = tree<
    pair<T,int>,
    null_type,
    less<pair<T,int>>,
    rb_tree_tag,
    tree_order_statistics_node_update
>;

/* ---------------- Solve Function ---------------- */

void solve() {

    /* ----- Ordered Set Example ----- */

    ordered_set<int> s;

    s.insert(10);
    s.insert(5);
    s.insert(2);

    cout << "kth element (1): " << *s.find_by_order(1) << "\n";
    cout << "elements < 10: " << s.order_of_key(10) << "\n";


    /* ----- Ordered Multiset Example ----- */

    ordered_multiset<int> ms;

    int id = 0;

    ms.insert({5,id++});
    ms.insert({5,id++});
    ms.insert({2,id++});

    cout << "elements < 5: " << ms.order_of_key({5,0}) << "\n";
}

/* ---------------- Main ---------------- */

int main() {

    fastio;

    solve();

    return 0;
}
