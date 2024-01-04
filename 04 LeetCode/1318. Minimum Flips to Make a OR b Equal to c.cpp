class Solution {
public:
    int minFlips(int a, int b, int c) {
        int unmatched = (a|b) ^ c;
        int cnt=0;
        for(int i=0; i<32; i++){
            int pos = 1<<i;
            if(unmatched & pos){
                if(((a&pos)==0) && ((b&pos)==0)) cnt++;
                else if(((a&pos)!=0) && ((b&pos)!=0)) cnt+=2;
                else if((c&pos)==0) cnt++;
            }
        }
        return cnt;
    }
};