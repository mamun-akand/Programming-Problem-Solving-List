class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> st;

        for(int i=0; i<n; i++){
            bool destroyed = false;

            while(!st.empty() && st.top() > 0 && asteroids[i] < 0){
                if( abs(st.top()) == abs(asteroids[i]) ){
                    st.pop();
                    destroyed = true;
                    break;
                }
                else if( abs(st.top()) > abs(asteroids[i]) ){
                    destroyed = true;
                    break;
                }else{
                    st.pop();
                }
            }

            if(destroyed == false) st.push(asteroids[i]);
        }

        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());

        return ans;
    }
};
