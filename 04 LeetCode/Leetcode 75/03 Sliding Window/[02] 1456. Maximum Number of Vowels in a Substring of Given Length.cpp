class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size(), cnt = 0, ans = 0;
        for(int i=0; i<n; i++){
            if(s[i] == 'a' ||s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                cnt++;
            }
            if(i >= k-1){
                ans = max(ans, cnt);
                if(s[i-k+1] == 'a' || s[i-k+1] == 'e' || s[i-k+1] == 'i' || s[i-k+1] == 'o' || s[i-k+1] == 'u'){
                    cnt--;
                }
            }
        }
        return ans;
    }
};

