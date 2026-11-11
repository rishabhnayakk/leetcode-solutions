# Longest Consecutive Sequence

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an unsorted array of integers `nums`, return *the length of the longest consecutive elements sequence.*

You must write an algorithm that runs in `O(n)` time.

 

Original
C++
**Example 1:**

```
Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

```

**Example 2:**

```
Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9

```

**Example 3:**

```
Input: nums = [1,0,1,2]
Output: 3

```

 

**Constraints:**

- 0 <= nums.length <= 105
- -109 <= nums[i] <= 109

## Solution

**Language:** C++  
**Runtime:** 14 ms (beats 93.20%)  
**Memory:** 60 MB (beats 99.43%)  
**Submitted:** 2026-11-11T17:25:11.383Z  

```cpp
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(nums.size()==0){
            return 0;
        }
        // else if(nums.size()==1){
        //     return 1;
        // }
        
        
        int c=1;
        int count=1;
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]==1){
                c++;
            }
            else if(nums[i]==nums[i-1]){
                continue;
            }
            else{
                c=1;
            } 
            count=max(count,c);
            
        }return count;
        

    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-consecutive-sequence/)