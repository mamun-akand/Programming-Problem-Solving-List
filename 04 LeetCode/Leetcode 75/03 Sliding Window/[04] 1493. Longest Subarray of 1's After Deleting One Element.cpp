class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int one=0, zero=0;
        int L=0, ans = 0;
        for(int R=0; R<n; R++){
            if(nums[R] == 0) zero++;
            else if(nums[R] == 1) one++;

            while(zero > 1){
                if(nums[L] == 0){ zero--; }
                if(nums[L] == 1){ one--; }
                L++;
            }
            ans = max(ans, one);
            if(zero == 0) ans--; //condition is we must delete an element. even if all elements one.
        }
        return ans;
    }
};
