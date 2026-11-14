# Reverse Integer

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a signed 32-bit integer `x`, return `x`* with its digits reversed*. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-231, 231 - 1]`, then return `0`.

**Assume the environment does not allow you to store 64-bit integers (signed or unsigned).**

 

Original
C++
**Example 1:**

```
Input: x = 123
Output: 321

```

**Example 2:**

```
Input: x = -123
Output: -321

```

**Example 3:**

```
Input: x = 120
Output: 21

```

 

**Constraints:**

- -231 <= x <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 50.52%)  
**Memory:** 8.7 MB (beats 6.01%)  
**Submitted:** 2026-11-14T19:13:46.314Z  

```cpp
class Solution {
public:
    int reverse(int x) {
        int r=0;
        while(x!=0){
            int digit=x%10;
            if(r>INT_MAX/10 || r<INT_MIN/10){
                return 0;
            }
            r=r*10+digit;
            x/=10;
        }
        return r;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-integer/)