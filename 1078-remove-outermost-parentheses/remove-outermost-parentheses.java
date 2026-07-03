class Solution {
    public String removeOuterParentheses(String s) {
        Stack st = new Stack<Character>();
        StringBuilder ans = new StringBuilder();
        for(char ch:s.toCharArray()){
            if(ch == '('){
                if(!st.isEmpty()){
                    ans= ans.append(ch);
                }
                st.push(ch);
            }
            else{
                st.pop();
                 if(!st.isEmpty()){
                    ans= ans.append(ch);
                }
            }
        }
      return ans.toString();
    }
}