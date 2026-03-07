class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size());
       for(int i =0;i<nums1.size();i++){
        ans[i]= -1;
        for(int j = 0; j<nums2.size();j++){
            if(nums1[i]==nums2[j]){

                //next larger
                for(int k = j+1;  k< nums2.size();k++){
                    if(nums2[j]<nums2[k]){
                        ans[i]= nums2[k];
                        break;
                    }
                }
            }
        }
        
       }
       return ans;
    }
};