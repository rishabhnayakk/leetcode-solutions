# 3Sum Closest

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array `nums` of length `n` and an integer `target`.

Find three integers at **distinct indices** in `nums` such that the sum is **closest** to `target`.

Return the sum of the three integers.

You may assume that each input would have **exactly** one solution.

 

**Example 1:**

```
Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

```

**Example 2:**

```
Input: nums = [0,0,0], target = 1
Output: 0
Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).

```

 

**Constraints:**

- 3 <= nums.length <= 500
- -1000 <= nums[i] <= 1000
- -104 <= target <= 104

## Solution

**Language:** C++  
**Runtime:** 8 ms (beats 81.07%)  
**Memory:** 13.9 MB (beats 95.31%)  
**Submitted:** 2026-11-05T20:26:13.409Z  

```cpp
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int t) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int s=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n-2;i++){
            int l=i+1,r=n-1;
            
            
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                if(abs(t-sum)<abs(t-s)){
                s=sum;
            }
            if(sum<t){
                l++;
        }   else if(sum>t){
            r--;
        }else{
            return sum;
        }
        }
        }return s;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/3sum-closest/)