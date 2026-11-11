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