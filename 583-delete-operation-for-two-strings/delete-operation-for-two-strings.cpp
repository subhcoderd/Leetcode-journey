class Solution {
public:
int dp[1001][1001];
int solve(string &text1, string &text2, int i , int j){
        if(i<0||j<0){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(text1[i]==text2[j]){
            return dp[i][j]= 1+ solve(text1,text2,i-1,j-1);
        }
        else
        return dp[i][j]= max(
                solve(text1, text2, i-1, j),
                solve(text1, text2, i, j-1)
            );
    }
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        memset(dp,-1,sizeof(dp));
        int i = n-1;
        int j = m-1;
        int l= solve(word1,word2,i,j);
        int ans = m+n-2*l;
        return ans;
    }
};