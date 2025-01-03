class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int size1 = str1.size();
        int size2 = str2.size();

        if(str1+str2 != str2+str1) return "";
        else{
            int gcd = __gcd(size1, size2);
            return str1.substr(0, gcd);
        }
    }
};
