class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = INT_MIN;
        int L = 0, R = height.size()-1;
        while(L <= R){
            int w = R-L;
            int h = min(height[R], height[L]);
            ans = max(ans, w*h);
            if(height[R] < height[L]){
                R--;
            }else{
                L++;
            }
        }
        return ans;
    }
};
