# Trapping Rain Water

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given `n` non-negative integers representing an elevation map where the width of each bar is `1`, compute how much water it can trap after raining.

 

Original
C++
**Example 1:**

```
Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.

```

**Example 2:**

```
Input: height = [4,2,0,3,2,5]
Output: 9

```

 

**Constraints:**

- n == height.length
- 1 <= n <= 2 * 104
- 0 <= height[i] <= 105

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 32.20%)  
**Memory:** 26.1 MB (beats 51.14%)  
**Submitted:** 2026-11-19T19:46:55.350Z  

```cpp
class Solution {
public:
    int trap(vector<int>& nums) {
        int n=nums.size();
        int l=0;int r=n-1;
        int lmax=0;int rmax=0;
        int sum=0;
        while(l<r){
            
            
            if(nums[l]<nums[r]){
                lmax=max(lmax,nums[l]);
                sum+=lmax-nums[l];
                l++;
            }
            else{
                rmax=max(rmax,nums[r]);
                sum+=rmax-nums[r];
                r--;
        }
        }return sum;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/trapping-rain-water/)