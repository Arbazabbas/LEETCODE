class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       int n=nums.size();
        int ans=-1;
       for(int i=0; i<n-1; i++){
           if(nums[i]==nums[i+1]){
               ans=nums[i];
           }
       }
        return ans;
    }
};