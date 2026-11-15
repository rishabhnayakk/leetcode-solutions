class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //    if(nums[i]==nums[i+1]){
        //         return nums[i];
        //         break;
        //    } 
        // }
        // return{};
        int n=nums.size();
        vector<int> f(n+1,0);
        for(int i=0;i<n;i++)
        {
            f[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(f[i]>=2){
                return i;
            }
    }return -1;
    }
};