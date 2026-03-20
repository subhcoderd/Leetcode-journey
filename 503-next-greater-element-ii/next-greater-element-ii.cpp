class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
         int n = arr.size();
         vector<int> ans(n);
        stack<int> s;
        
        
        for(int i = 2 * n - 1; i >= 0; i--){
            if(s.empty()){
                ans[i%n]=-1;

            }
            else if(!s.empty()&& s.top()>arr[i % n]){
                ans[i%n]= s.top();
            }
            else if(!s.empty()&& s.top()<=arr[i % n]){
                while(!s.empty()&& s.top()<=arr[i % n]){
                    s.pop();
                }
                if(s.empty()){
                    ans[i%n]= -1;
                }
                else ans[i%n] = s.top();
            }
            s.push(arr[i % n]);

        }
        return ans;
    }
};