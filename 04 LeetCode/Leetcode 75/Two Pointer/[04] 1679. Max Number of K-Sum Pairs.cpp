class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int ans = 0;
        int L=0, R=nums.size()-1;
        while(L<R){
            if(nums[L] + nums[R] == k){
                ans++; R--; L++;
            }else if(nums[L] + nums[R] > k){
                R--;
            }else{
                L++;
            }
        }
        return ans;
    }
};
