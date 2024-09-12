// https://leetcode.com/problems/maximum-subarray/submissions/1387387520/
#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
	int sum = 0, ans = INT_MIN;
	int startIndex = -1, endIndex = -1;
	for(int i=0; i<nums.size(); i++){
		// int start;
		// if(sum == 0) start = i;
		sum += nums[i];
		if(sum > ans){
			ans = sum;
			// startIndex = start;
			// endIndex = i;
		}
		if(sum < 0) sum = 0;
	}
	// // print subarray
	// for(int i=startIndex; i<= endIndex; i++){
		// cout << nums[i] << " ";
	// } cout << endl;
	return ans;
}
    
int main(){
	vector<int> v = {-2,1,-3,4,-1,2,1,-5,4};
	cout << maxSubArray(v) << endl;;
}





















