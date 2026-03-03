class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int> s;
        vector<int> ans;
        int n = grid.size();
        int a,b;
        int actual_sum=0;
        for(int i = 0;i<n;i++){
            for(int j = 0; j<n;j++){
                if(s.find(grid[i][j])!=s.end()){
                    a = grid[i][j];
                }
                s.insert(grid[i][j]);
                actual_sum+=grid[i][j];
            }
        }
     int total = n * n;
int expected_sum = total * (total + 1) / 2;
        b = expected_sum - actual_sum + a;
        ans.push_back(a);
        ans.push_back(b);
      return ans;
    }

};