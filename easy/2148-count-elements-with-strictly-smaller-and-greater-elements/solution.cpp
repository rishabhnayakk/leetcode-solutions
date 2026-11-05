class Solution {
public:
    int countElements(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        int s=*min_element(nums.begin(),nums.end());
        int e=*max_element(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]>s&&nums[i]<e){
                c++;
            }
        }return c;
    }
};