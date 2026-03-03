class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        int ans;
        int n = nums.size();
        for(int j = 0; j<n;j++){
                if(s.find(nums[j])!=s.end()){
                    ans = nums[j];
                }
                s.insert(nums[j]);
                
            }
            return ans;
    }
};