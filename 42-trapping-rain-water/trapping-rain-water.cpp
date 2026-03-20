class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0)
            return 0;
        int l = 0;
        int r = n-1;    
        int ans = 0;
        int leftmax= 0;
        int rightmax=0;

        while(l<r){
            leftmax= max(leftmax,height[l]);
            rightmax = max(rightmax,height[r]);

            if(leftmax<rightmax){
                ans+=leftmax - height[l];
                l++;
            }
            else{
                ans+=rightmax - height[r];
                r--;
            }
        } 

        return ans;
    }
};