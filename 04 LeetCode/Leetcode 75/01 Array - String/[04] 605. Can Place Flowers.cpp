class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();

        for(int i=1; i<(int)flowerbed.size(); i++){
            if(flowerbed[i] == 1 && flowerbed[i-1] == 1){
                return false;
            }
        }

        int valid_pos0 = 0;
        int valid_pos1 = 0;

        for(int i=0; i<size; i+=2){
            if(flowerbed[i] == 0 && (i == 0 || flowerbed[i-1] == 0) && (i == size-1 || flowerbed[i+1] == 0) ){
                valid_pos0++;
                cout << i << endl;
            }
        }

        for(int i=1; i<size; i+=2){
            if(flowerbed[i] == 0 && flowerbed[i-1] == 0 && (i == size-1 || flowerbed[i+1] == 0) )  valid_pos1++;
        }

        if(valid_pos0 >= n || valid_pos1 >= n) return true;

        return false;
    }
};
