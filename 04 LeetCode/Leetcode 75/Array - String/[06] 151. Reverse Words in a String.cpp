class Solution {
public:
    string reverseWords(string s) {
        stringstream custominput(s);
        vector<string> v;

        string temp;
        while(custominput >> temp){
            v.push_back(temp);
        }

        reverse(v.begin(), v.end());

        string ans = "";
        for(int i=0; i<v.size(); i++){
            ans += v[i];
            i != v.size()-1 ? (ans += " ") : (ans += "");
        }
        return ans;
    }
};
