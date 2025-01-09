class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        vector<vector<int>> column(grid.size());

        for(int i=0; i<(int)grid.size(); i++){
            for(int j=0; j<(int)grid.size(); j++){
                column[j].push_back(grid[i][j]);
            }
            cout << endl;
        }
        int cnt=0;
        for(int i=0; i<(int)grid.size(); i++){
            for(int j=0; j<(int)grid.size(); j++){
                if(grid[i] == column[j]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
