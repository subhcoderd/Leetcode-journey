class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st ;
        string ans= "";
        for(char sh:s){
            if(sh=='('){
                if(!st.empty()){
                    ans+=sh;
                }
                st.push(sh);
            }else{
                st.pop();
                if(!st.empty()){
                    ans+=sh;
                }
            }
            
        }
        return ans;
    }
};