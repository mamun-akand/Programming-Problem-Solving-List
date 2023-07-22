// https://leetcode.com/problems/4sum/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
   vector< vector<int> > ans;
   if(nums.size() < 4) return ans;
   
   sort(nums.begin(), nums.end());
   
   vector<int> v;
   set<vector<int>> s; 

   for(int k=0; k<nums.size(); k++){
      for(int j=k+1; j<nums.size(); j++){
         unordered_set<int> mp;
         long long temp = (long long)target - nums[k];
         temp = temp - nums[j];
         
         if(temp < INT_MIN || temp > INT_MAX) return ans;
         
         for(int i=j+1; i<nums.size(); i++){
            
            long long dif = temp-nums[i];
            if(dif < INT_MIN || temp > INT_MAX) return ans;
            if(mp.find(dif) != mp.end()){
               v.push_back(nums[k]);
               v.push_back(nums[j]);
               v.push_back(nums[i]);
               v.push_back(*mp.find((long long)dif));
               
               if(s.find(v) == s.end()){
                  ans.push_back(v);
               }
               s.insert(v);
               v.clear();
            }
            else{
               mp.insert(nums[i]);
            }
         }
         mp.clear();
      }
   }
   
   return ans;
}


int main(){
   vector<int> vv = {-1000000000,-1000000000,1000000000,-1000000000,-1000000000};
   vector< vector<int> > ans;
   
   ans = fourSum(vv, 294967296);
   
   cout << ans.size() << endl;
   
   for(auto it:ans){
      for(auto itt:it){
         cout << itt << " ";
      }
      cout << endl;
   }
}