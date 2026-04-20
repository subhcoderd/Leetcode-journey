class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sums = 0;
        int maxsum = INT_MIN;
        for(int i=0; i <nums.size(); i++){
            sums += nums[i];
            maxsum = max(maxsum,sums);
            if (sums < 0){
             sums = 0;
            }
        }
            return maxsum;

    }
};