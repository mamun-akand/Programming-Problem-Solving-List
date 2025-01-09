class Solution {
public:
    bool closeStrings(string word1, string word2) {
        sort(word1.begin(), word1.end());
        sort(word2.begin(), word2.end());

        if(word1 == word2) return true;

        set<char> setChar1, setChar2;
        multiset<int> setInt1, setInt2;
        map<char, int> mp1, mp2;

        for(auto ch : word1){
            setChar1.insert(ch);
            mp1[ch]++;
        }

        for(auto ch : word2){
            setChar2.insert(ch);
            mp2[ch]++;
        }

        for(auto [x,y] : mp2){
            setInt2.insert(y);
        }

        for(auto [x,y] : mp1){
            setInt1.insert(y);
        }

        if(setChar1 == setChar2 && setInt1 == setInt2){
            return true;
        }

        return false;
    }
};
