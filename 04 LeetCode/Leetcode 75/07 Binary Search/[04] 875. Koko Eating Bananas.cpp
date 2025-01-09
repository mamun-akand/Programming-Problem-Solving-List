class Solution {
public:
    bool monotonic(int v, int h, int n, vector<int>& piles){
        long long cnt_h = 0;
        for(int i=0; i<n; i++){
            cnt_h += ceil((double)piles[i]/(double)v);
        }
        return cnt_h <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int Max = *max_element(piles.begin(), piles.end());
        int l = 1, r = Max, ans;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(monotonic(mid, h, piles.size(), piles)){
                ans = mid;
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return ans;
    }
};
