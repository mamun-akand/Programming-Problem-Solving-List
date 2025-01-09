class Solution {
public:
    string decodeString(string s) {
        stack<char> st;

        for(int i=0; i<s.size(); i++){
            if(s[i] != ']'){
                st.push(s[i]);
            }else{
                //string
                string cur_string = "";
                while(st.top() != '[' && !st.empty()){
                    cur_string = st.top() + cur_string;
                    st.pop();
                }
                if(st.top() == '[') st.pop();

                //number
                string num = "";
                while(!st.empty() && isdigit(st.top())){
                    num = st.top() + num;
                    st.pop();
                }
                int times = stoi(num);

                for(int i=0; i<times; i++){
                    for(int j=0; j<cur_string.size(); j++){
                        st.push(cur_string[j]);
                    }
                }
            }
        }

        string ans="";
        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};
