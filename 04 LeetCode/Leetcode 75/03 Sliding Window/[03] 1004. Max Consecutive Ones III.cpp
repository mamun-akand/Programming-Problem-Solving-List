class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int L = 0, cnt_zero = 0, ans = INT_MIN;

        for(int R=0; R<n; ){
            if(nums[R] == 0) {cnt_zero++;}

            while(cnt_zero > k){
                if(nums[L] == 0) {cnt_zero--;}
                L++;
            }

            ans = max(ans, R-L+1);
            R++;
        }
        return ans;
    }
};
