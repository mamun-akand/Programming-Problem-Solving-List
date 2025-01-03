class Solution {
public:

    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int n, m;
        n = word1.size();
        m = word2.size();
        bool flag=0;
        for(int i=0; i<(int)min(n,m); i++){
            ans.push_back(word1[i]);
            ans.push_back(word2[i]);
        }
        if(n < m){
            for(int i=n; i<m; i++){
                ans.push_back(word2[i]);
            }
        }else{
            for(int i=m; i<n; i++){
                ans.push_back(word1[i]);
            }
        }
        return ans;
    }
};
