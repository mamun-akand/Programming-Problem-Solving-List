class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());

        vector<int> ans;
        for(int i=0; i<spells.size(); i++){
            long long need = ceil((double)success/(double)spells[i]);
            int cnt = potions.end() - lower_bound(potions.begin(), potions.end(), need);
            ans.push_back(cnt);
        }
        return ans;
    }
};
