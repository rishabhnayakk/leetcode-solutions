# Happy Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Write an algorithm to determine if a number `n` is happy.

A **happy number** is a number defined by the following process:

- Starting with any positive integer, replace the number by the sum of the squares of its digits.
- Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
- Those numbers for which this process ends in 1 are happy.

Return `true` *if* `n` *is a happy number, and* `false` *if not*.

 

Original
C++
**Example 1:**

```
Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1

```

**Example 2:**

```
Input: n = 2
Output: false

```

 

**Constraints:**

- 1 <= n <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 7.9 MB (beats 55.50%)  
**Submitted:** 2026-11-10T14:12:33.496Z  

```cpp
class Solution {
public:
    bool isHappy(int num) {
        int arr[1000]={0};
        while(num!=1){

            
            int sum=0;
            
            while(num!=0){
                sum+=(num%10)*(num%10);
                num/=10;
            }
            num=sum;
            if(arr[num] == 1)
                return false;
            arr[num] = 1;
            
        }
        return num==1;
}};
```

---

[View on LeetCode](https://leetcode.com/problems/happy-number/)