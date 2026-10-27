class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s=0,e=nums.size()-1,j=0;
        while(j<=e){
            if(nums[j]==0){
                swap(nums[j],nums[s]);
                j++;
                s++;
            }
            else if(nums[j]==2){
                swap(nums[j],nums[e]);
                e--;
            }
            else{
                j++;
            }
        }
    }
};