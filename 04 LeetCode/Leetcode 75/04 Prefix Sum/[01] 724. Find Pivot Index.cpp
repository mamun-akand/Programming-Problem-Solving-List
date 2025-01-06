class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i=1; i<nums.size(); i++){
            nums[i] = nums[i] + nums[i-1];
        }
        int ans_index = -1, left_sum = 0, right_sum = 0;
        for(int i=0; i<n; i++){
            if(i == 0){
                left_sum = 0;
                right_sum = nums[n-1] - nums[0];
            }
            else if(i == n-1){
                left_sum = nums[i-1];
                right_sum = 0;
            }else{
                left_sum = nums[i-1];
                right_sum = nums[n-1] - nums[i];
            }

            if(left_sum == right_sum) {
                ans_index = i; break;
            }
        }
        return ans_index;
    }
};
