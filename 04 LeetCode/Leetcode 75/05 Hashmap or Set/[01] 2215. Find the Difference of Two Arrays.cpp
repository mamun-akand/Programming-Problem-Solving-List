class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1, s2;
        for(int i=0; i<nums1.size(); i++){
            s1.insert(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++){
            s2.insert(nums2[i]);
        }

        vector<vector<int>> v(2);
        for (auto it : s1) {
            auto f = s2.find(it);
            if (f == s2.end()) {
                v[0].push_back(it);
            }
        }

        for (auto it : s2) {
            auto f = s1.find(it);
            if (f == s1.end()) {
                v[1].push_back(it);
            }
        }

        return v;
    }
};
