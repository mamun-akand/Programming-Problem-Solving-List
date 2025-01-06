class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() > t.size()) return false;

        int L=0;
        for(int R=0; R<t.size(); R++){
            if(s[L] == t[R]) L++;
        }
        if(L == s.size()) return true;
        else return false;
    }
};
