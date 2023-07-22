class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        long long pre[(arr.size()+10)];
        pre[0] = arr[0];
        for(long long i=1; i<arr.size(); i++){
            pre[i] = pre[i-1] ^ arr[i]; 
        }
        vector<int> ans;
        long long q = queries.size();
        for(long long i=0;i<q; i++){
            long long l, r;
            l = queries[i][0];
            r = queries[i][1];

            long long a=0;
            if(l==0) a = pre[r];
            else a = pre[r] ^ pre[l-1];

            ans.push_back(a); 
        }

        return ans;
    }
};

