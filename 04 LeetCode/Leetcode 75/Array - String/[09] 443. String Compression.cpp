class Solution {
public:
    int compress(vector<char>& chars) {
        int cnt = 1, size = chars.size(), l=0;
        for(int i=1; i<size; i++){
            if(chars[i] != chars[i-1]){
                chars[l] = chars[i-1]; l++;
                if(cnt > 1){
                    string temp = to_string(cnt);
                    for(int j=0; j<temp.size(); j++){
                        chars[l] = temp[j];
                        l++;
                    }
                }
                cnt=1;
            }else{
                cnt++;
            }
        }
        chars[l] = chars[size-1]; l++;
        if(cnt > 1){
            string temp = to_string(cnt);
            for(int j=0; j<temp.size(); j++){
                chars[l] = temp[j];
                l++;
            }
        }

        // chars.resize(l);
        // for(int i=0; i<chars.size(); i++){
        //     cout << chars[i] << " ";
        // }

        return l;
    }
};
