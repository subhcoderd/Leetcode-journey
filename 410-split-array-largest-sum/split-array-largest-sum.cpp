class Solution {
public:
    int countSubarrays(vector<int>& nums, int maxSum){
        int parts = 1;
        int sum = 0;

        for(int x : nums){
            if(sum + x <= maxSum){
                sum += x;
            }else{
                parts++;
                sum = x;
            }
        }

        return parts;
    }

    int splitArray(vector<int>& nums, int k) {

        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while(low <= high){

            int mid = low + (high - low) / 2;

            if(countSubarrays(nums, mid) <= k){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }

        return low;
    }
};