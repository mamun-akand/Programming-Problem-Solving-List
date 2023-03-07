class Solution {
public:
    bool isPowerOfTwo(int n) {
        bitset<64> s(n);
        if(s.count()==1) return 1;
        else return 0;        
    }
};