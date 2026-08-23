class Solution {
public:
   bool solve(int n, vector<int>& nums, vector<vector<int>>& dp, int target){
            if(target==0){
                return true;
            }

            if(n<0){
                return false;
            }

            if(dp[n][target]!=-1){
                return dp[n][target];
            }

            if(nums[n]>target){
                return dp[n][target]=solve(n-1,nums,dp,target);
            }
            int take = solve(n-1,nums,dp,target-nums[n]);
            int nottake = solve(n-1,nums,dp,target);
            return dp[n][target]= take||nottake;

   }
    
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int n = nums.size();
        if(n==1){
            return false;
        }
        if(sum%2!=0){
            return false;
        }
        int target = sum/2;
        vector<vector<int>> dp(n,vector<int>(target + 1, -1));
        
        return solve(n-1,nums,dp,target);

    }
};