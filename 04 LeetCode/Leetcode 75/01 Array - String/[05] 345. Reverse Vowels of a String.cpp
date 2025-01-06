class Solution {
public:
    string reverseVowels(string s) {
        string vowels="";
        for(int i=0; i<(int)s.size(); i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
            s[i]=='A' ||s[i]=='E' || s[i]=='I' || s[i]=='O' ||s[i]=='U'){
                vowels.push_back(s[i]);
            }
        }
        reverse(vowels.begin(), vowels.end());
        int pos = 0;

        for(int i=0; i<(int)s.size(); i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
            s[i]=='A' ||s[i]=='E' || s[i]=='I' || s[i]=='O' ||s[i]=='U'){
                s[i] = vowels[pos]; pos++;
            }
        }

        return s;
    }
};
