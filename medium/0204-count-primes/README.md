# Count Primes

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer `n`, return *the number of prime numbers that are strictly less than* `n`.

 

**Example 1:**

```
Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

```

**Example 2:**

```
Input: n = 0
Output: 0

```

**Example 3:**

```
Input: n = 1
Output: 0

```

 

**Constraints:**

- 0 <= n <= 5 * 106

## Solution

**Language:** C++  
**Runtime:** 203 ms (beats 80.55%)  
**Memory:** 14 MB (beats 67.55%)  
**Submitted:** 2026-10-29T18:23:21.641Z  

```cpp
class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n, true);
        int count = 0;

        if(n <= 2)
            return 0;

        prime[0] = prime[1] = false;

        for(int i = 2; i * i < n; i++) {
            if(prime[i]) {
                for(int j = i * i; j < n; j += i)
                    prime[j] = false;
            }
        }

        for(int i = 2; i < n; i++) {
            if(prime[i])
                count++;
        }

        return count;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/count-primes/)