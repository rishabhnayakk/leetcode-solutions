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