class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int sum = 0;
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n- 1;
            while (left < right) {
                sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                }
                else if (sum > 0) {
                    right--;
                }
                else {
                    left++;
                }
            }
        }
        sort(ans.begin(), ans.end());
// Sort triplets so that duplicate triplets become adjacent.

        ans.erase(unique(ans.begin(), ans.end()), ans.end());
// Remove consecutive duplicate triplets.
// unique() moves duplicates to the end.
// erase() deletes those extra elements.

        return ans;
// Return the final unique triplets.
    }
};