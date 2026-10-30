class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        int c=0;
        
        for(int i=0;i<n;i++){
            s+=nums[i];
            if(s==0){
            c++;
        }
        }
        
        return c;
    }
};