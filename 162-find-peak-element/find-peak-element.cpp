class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
        while(i<j){
            if(nums[i]>nums[j]){
                j--;
            }
            else i++;

        }
        if(nums[i]>nums[j]){
            return i;
        }
        else return j;
    }
};