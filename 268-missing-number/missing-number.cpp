class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int actual_sum = n*(n+1)/2;
        int exsum=0;
        for(int i = 0;i<n;i++){
            exsum+=nums[i];
        }
        int ans = actual_sum-exsum;
        return ans;
    }
};