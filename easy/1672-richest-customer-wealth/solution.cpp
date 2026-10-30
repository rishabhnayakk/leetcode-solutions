class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxW = 0;
        for (int i = 0; i < accounts.size(); i++) {
            int W = 0;
            for (int j = 0; j < accounts[i].size(); j++) {
                W += accounts[i][j];
            }
            maxW=max(W,maxW);
            // if (W > maxW) {
            //     maxW = W;
            // }
        }
        return maxW;
    }
};