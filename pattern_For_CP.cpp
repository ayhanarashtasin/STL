#include <bits/stdc++.h>
using namespace std;

/*
====================================================
        DSA PATTERNS + QUESTIONS + SOLUTIONS
        Author: Ayhan Tasin
        Purpose: Never forget DSA patterns
====================================================

Patterns Included:
1. Sliding Window
2. Prefix Sum
3. Sliding Window + Map
4. Binary Search (lb / ub)
5. Two Pointers
6. Greedy + Sorting
====================================================
*/


/* ==================================================
   1️⃣ SLIDING WINDOW (Variable)
================================================== */
/*
QUESTION:
Given an array of POSITIVE integers and an integer k,
find the length of the longest subarray whose sum <= k.

Example:
a = [1,2,3,1,1,1], k = 5
Answer = 4  (subarray [1,1,1,1])
*/

int longestSubarraySumAtMostK(vector<int>& a, int k) {
    int l = 0;
    long long sum = 0;
    int ans = 0;

    for (int r = 0; r < a.size(); r++) {
        sum += a[r];
        while (sum > k) {
            sum -= a[l++];
        }
        ans = max(ans, r - l + 1);
    }
    return ans;
}


/* ==================================================
   2️⃣ PREFIX SUM
================================================== */
/*
QUESTION:
Given an array (can contain NEGATIVE numbers) and integer k,
count the number of subarrays whose sum equals k.

Example:
a = [1,2,3,-2,5], k = 5
Answer = 2
*/

int countSubarraysWithSumK(vector<int>& a, int k) {
    unordered_map<long long,int> mp;
    mp[0] = 1;  // empty prefix

    long long sum = 0;
    int ans = 0;

    for (int x : a) {
        sum += x;
        if (mp.count(sum - k))
            ans += mp[sum - k];
        mp[sum]++;
    }
    return ans;
}


/* ==================================================
   3️⃣ SLIDING WINDOW + MAP (Frequency Window)
================================================== */
/*
QUESTION:
Given a string s, find the length of the longest substring
without repeating characters.

Example:
s = "abcabcbb"
Answer = 3 ("abc")
*/

int longestUniqueSubstring(string s) {
    vector<int> cnt(256, 0);
    int l = 0, ans = 0;

    for (int r = 0; r < s.size(); r++) {
        cnt[s[r]]++;
        while (cnt[s[r]] > 1) {
            cnt[s[l]]--;
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    return ans;
}

/*
QUESTION:
Given an array, count subarrays with EXACTLY k distinct integers.

Trick:
exactlyK = atMostK(k) - atMostK(k-1)
*/

long long atMostKDistinct(vector<int>& a, int k) {
    unordered_map<int,int> cnt;
    int l = 0;
    long long ans = 0;

    for (int r = 0; r < a.size(); r++) {
        cnt[a[r]]++;
        while (cnt.size() > k) {
            cnt[a[l]]--;
            if (cnt[a[l]] == 0) cnt.erase(a[l]);
            l++;
        }
        ans += (r - l + 1);
    }
    return ans;
}

long long exactlyKDistinct(vector<int>& a, int k) {
    return atMostKDistinct(a, k) - atMostKDistinct(a, k - 1);
}


/* ==================================================
   4️⃣ BINARY SEARCH (lb / ub + answer)
================================================== */
/*
QUESTION:
Given a sorted array and value x,
find how many times x appears.

Use lower_bound & upper_bound.
*/

int countOccurrences(vector<int>& a, int x) {
    int lb = lower_bound(a.begin(), a.end(), x) - a.begin();
    int ub = upper_bound(a.begin(), a.end(), x) - a.begin();
    return ub - lb;
}

/*
QUESTION (Binary Search on Answer):
You have n machines. Machine i produces 1 item in t[i] time.
Find minimum time to produce k items.
*/

bool canProduce(long long time, vector<int>& t, long long k) {
    long long cnt = 0;
    for (int x : t) {
        cnt += time / x;
        if (cnt >= k) return true;
    }
    return false;
}

long long minTimeToProduce(vector<int>& t, long long k) {
    long long l = 1, r = 1e18, ans = -1;
    while (l <= r) {
        long long mid = (l + r) / 2;
        if (canProduce(mid, t, k)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}


/* ==================================================
   5️⃣ TWO POINTERS
================================================== */
/*
QUESTION:
Given a SORTED array, check if there exists a pair
with sum = k.
*/

bool pairSumSorted(vector<int>& a, int k) {
    int l = 0, r = a.size() - 1;
    while (l < r) {
        int sum = a[l] + a[r];
        if (sum == k) return true;
        else if (sum > k) r--;
        else l++;
    }
    return false;
}

/*
QUESTION:
Remove duplicates from a sorted array IN-PLACE
and return new length.
*/

int removeDuplicates(vector<int>& a) {
    int slow = 0;
    for (int fast = 0; fast < a.size(); fast++) {
        if (fast == 0 || a[fast] != a[fast - 1]) {
            a[slow++] = a[fast];
        }
    }
    return slow;
}


/* ==================================================
   6️⃣ GREEDY + SORTING
================================================== */
/*
QUESTION:
Given intervals [l, r], find maximum number of
non-overlapping intervals.
*/

int maxIntervals(vector<pair<int,int>>& v) {
    sort(v.begin(), v.end(), [](auto &a, auto &b) {
        return a.second < b.second;
    });

    int cnt = 0;
    int lastEnd = -1e9;
    for (auto [l, r] : v) {
        if (l >= lastEnd) {
            cnt++;
            lastEnd = r;
        }
    }
    return cnt;
}

/*
QUESTION:
You have tasks with difficulty a[i] and workers with strength b[j].
Each worker can do at most one task if b[j] >= a[i].
Maximize completed tasks.
*/

int maxTasks(vector<int>& tasks, vector<int>& workers) {
    sort(tasks.begin(), tasks.end());
    sort(workers.begin(), workers.end());

    int i = 0, j = 0, ans = 0;
    while (i < tasks.size() && j < workers.size()) {
        if (workers[j] >= tasks[i]) {
            ans++;
            i++; j++;
        } else {
            j++;
        }
    }
    return ans;
}


/* ==================================================
   MAIN (empty – for local testing)
================================================== */
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Add custom tests here if needed

    return 0;
}
//https://chatgpt.com/share/694bc63a-59a0-8007-8197-fd28165dd76d
