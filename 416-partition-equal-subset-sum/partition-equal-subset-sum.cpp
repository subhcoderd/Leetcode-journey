class Solution {
public:
    bool canPartition(vector<int>& arr) {
         int total=0;
        int n = arr.size();
        for(int nums : arr){
            total += nums;
        }
        
        if(total%2!=0){
            return false;
        }
        int sum = total/2;
                int dp[n+1][sum+1];
                memset(dp,false,sizeof(dp));

        for(int i = 0; i <= n; i++) dp[i][0] = true;
        for(int j = 1; j <= sum; j++) dp[0][j] = false;
        for(int i =1;i<=n;i++){
            for(int j =1;j<=sum;j++){
                
                if(arr[i-1]> j){
                    dp[i][j]= dp[i-1][j];
                }
                else 
                dp[i][j]= dp[i-1][j-arr[i-1]]||dp[i-1][j];
            }
        }
        
        return dp[n][sum];
    }
};