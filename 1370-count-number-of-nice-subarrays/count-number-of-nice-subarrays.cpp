class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i = 0; i <n;i++){
            if(nums[i]%2==0){
                nums[i]=0;
            }
            else nums[i]=1;
        }
        
        int ps[n];
        int count = 0;
        unordered_map<int, int> m;
        ps[0] = nums[0];
        for (int i = 1; i < n; i++) {
            ps[i] = ps[i - 1] + nums[i];
        }

        for (int j = 0; j < n; j++) {
            if (ps[j] == k) {
                count++;
            }
            int val = ps[j] - k;

            if (m.find(val) != m.end()) {
                count += m[val];
            }
            if (m.find(ps[j]) == m.end()) {
                m[ps[j]] = 0;
            }
            m[ps[j]]++;
        }
        return count;
    }
};