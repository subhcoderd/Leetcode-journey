class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int maxLen = 0;

        for (int i = 1; i < n - 1; i++) {

            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                int left = i;
                int right = i;
                int count = 1; 

              
                while (left > 0 && arr[left] > arr[left - 1]) {
                    count++;
                    left--;
                }

                
                while (right < n - 1 && arr[right] > arr[right + 1]) {
                    count++;
                    right++;
                }

                maxLen = max(maxLen, count);
            }
        }

        return maxLen;
    }
};