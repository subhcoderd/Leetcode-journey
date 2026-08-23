class Solution {
public:
int solve(int i,int e,vector<int>& nums,vector<int>& dp){
       if(i>e){
        return 0;
       }
       if(dp[i]!=-1){
        return dp[i];
       }

       int take = nums[i]+solve(i+2,e,nums,dp);
       int nottake = solve(i+1,e,nums,dp);

       return dp[i]=max(take,nottake);
        
}
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        vector<int>dp1(n+1,-1);
        int first = solve(0,n-2,nums,dp1);
        vector<int>dp2(n+1,-1);
        int last = solve(1,n-1,nums,dp2);
        
        int ans = max(first,last);
        return ans;
    }
};