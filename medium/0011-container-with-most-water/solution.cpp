
class Solution {
public:
    int maxArea(vector<int>& height) {
        int s = 0;
        int e = height.size() - 1;
        int m = 0;
        while (s < e) {
            int area = min(height[s], height[e]) * (e - s);
            m = max(m, area);
            if (height[s] < height[e]) {
                s++;
            } else {
                e--;
            }}
        return m;}
};