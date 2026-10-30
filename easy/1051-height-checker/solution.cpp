class Solution {
public:
    int heightChecker(vector<int>& h) {
        int n=h.size();
        int c=0;
        vector<int>arr=h;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(h[i]!=arr[i]){
                c++;
            }
        }
        return c;
    }
};