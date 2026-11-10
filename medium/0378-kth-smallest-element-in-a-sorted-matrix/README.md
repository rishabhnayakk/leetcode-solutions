# Kth Smallest Element in a Sorted Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an `n x n` `matrix` where each of the rows and columns is sorted in ascending order, return *the* `kth` *smallest element in the matrix*.

Note that it is the `kth` smallest element **in the sorted order**, not the `kth` **distinct** element.

You must find a solution with a memory complexity better than `O(n2)`.

 

Original
C++
**Example 1:**

```
Input: matrix = [[1,5,9],[10,11,13],[12,13,15]], k = 8
Output: 13
Explanation: The elements in the matrix are [1,5,9,10,11,12,13,13,15], and the 8th smallest number is 13

```

**Example 2:**

```
Input: matrix = [[-5]], k = 1
Output: -5

```

 

**Constraints:**

- n == matrix.length == matrix[i].length
- 1 <= n <= 300
- -109 <= matrix[i][j] <= 109
- All the rows and columns of matrix are guaranteed to be sorted in non-decreasing order.
- 1 <= k <= n2

 

**Follow up:**

- Could you solve the problem with a constant memory (i.e., O(1) memory complexity)?
- Could you solve the problem in O(n) time complexity? The solution may be too advanced for an interview but you may find reading this paper fun.

## Solution

**Language:** C++  
**Runtime:** 5 ms (beats 49.75%)  
**Memory:** 18.6 MB (beats 13.03%)  
**Submitted:** 2026-11-10T22:20:53.774Z  

```cpp
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int m = matrix[0].size();vector<int>arr;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr.push_back(matrix[i][j]);
            }
        }
        sort(arr.begin(),arr.end());return arr[k-1];
        }
};
```

---

[View on LeetCode](https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/)