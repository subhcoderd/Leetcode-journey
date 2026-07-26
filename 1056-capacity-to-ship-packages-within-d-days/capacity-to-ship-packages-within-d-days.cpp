class Solution {
public:
    int totaldays(vector<int>& weights, int capacity){
        int sum= 0;
        int days=1;
        for(int j : weights){
            if(sum+j<=capacity){
                sum+=j;
            }else{
                sum=j;
                days++;
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(),weights.end());
        int right = accumulate(weights.begin(),weights.end(),0);
        int ans = right;
        while(left<=right){
            int mid = left+(right-left)/2;
            int takendays=totaldays(weights,mid);
            if(takendays<=days){
                ans = mid;
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
        return ans;
    }
};