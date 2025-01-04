class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result(candies.size());
        int mx = *max_element(candies.begin(), candies.end());
        for(int i = 0; i<(int)candies.size(); i++){
            if(candies[i] == mx) result[i] = true;
            else if((candies[i]+extraCandies) >= mx) result[i] = true;
            else result[i] = false;
        }
        return result;
    }
};
