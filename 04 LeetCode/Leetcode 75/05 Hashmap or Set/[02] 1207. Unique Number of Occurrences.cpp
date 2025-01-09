class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mp;
        for(int i=0; i<(int)arr.size(); i++){
            mp[arr[i]]++;
        }
        set<int> st;
        int cnt=0;
        for(auto [x,y]:mp){
            st.insert(y);
            cnt++;
        }

        if(st.size() == cnt) return true;
        else return false;

    }
};
