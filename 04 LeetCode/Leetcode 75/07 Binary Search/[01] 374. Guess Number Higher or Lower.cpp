class Solution {
public:
    int guessNumber(int n) {
        int l = 1, r=n, ans;
        while(l<=n){
            int mid = l + (r-l)/2;
            if(guess(mid) == 0){
                ans = mid;
                break;
            }else if(guess(mid) == -1){
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        return ans;
    }
};
