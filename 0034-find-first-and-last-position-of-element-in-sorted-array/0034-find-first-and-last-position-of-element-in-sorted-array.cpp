class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int low=0;
     //   int first=-1,last=-1;
        int high=nums.size()-1;
        vector<int>v;
        while(low<=high){
            if(nums[low]<target){
                low=low+1;
            }
            else if(nums[high]>target){
                high=high-1;
            }
            else if(nums[low]==target && nums[high]==target){
                v.push_back(low);
                v.push_back(high);
                return {low,high};
            }
        }
        return {-1,-1};
        }
};