class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0, n = nums.size();
        double max_avg = -DBL_MAX;

        for(int i=0; i<n; i++){
            sum += nums[i];
            if(i >= k-1){
                double curr_avg = (double)sum / (double)k;
                max_avg = max(max_avg, curr_avg);
                sum -= nums[i-k+1];
            }
        }
        return max_avg;
    }
};
