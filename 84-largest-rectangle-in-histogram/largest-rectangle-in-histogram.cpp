class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int n = heights.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        int height =0;
        int width =0;
        int area = 0;
        int maxarea = 0;
        for(int i= n-1;i>=0;i--){
            while(!s.empty()&&heights[s.top()]>=heights[i]){
                s.pop();
            }
            right[i]=s.empty()? n: s.top();
            s.push(i);
        }
        while(!s.empty()) s.pop();

        for(int i= 0;i<n;i++){
            while(!s.empty()&&heights[s.top()]>=heights[i]){
                s.pop();
            }
            left[i]=s.empty()? -1: s.top();
            s.push(i);
        }
        for(int i = 0; i<n;i++){
            height = heights[i];
            width = right[i]-left[i]-1;
            area = height * width;
            maxarea = max(area,maxarea);
        }
        return maxarea;
    }
};