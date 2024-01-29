class Solution {
    int getPivot(vector<int> &nums){
        int s= 0;
        int e= nums.size()-1;

        while(s<=e){
            int mid = (s+e)/2;

            if(mid+1>=nums.size())
                break;
            if(nums[mid]>nums[mid+1]){
                return mid;
            }else if(nums[mid]>=nums[0]){
                s= mid+1;
            }else{
                e= mid-1;
            }
        }
        return -1;
    }
    int binarySearch(vector<int> nums,int s, int e,int target){
        while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                e= mid-1;
            }else{
                s= mid+1;
            }
        }
        return -1;
    }

public:
    int search(vector<int>& nums, int target) {
        int k = getPivot(nums);
       
        if(k==-1) return binarySearch(nums,0,nums.size()-1,target);
        if(target<nums[0]){
            return binarySearch(nums,k+1,nums.size()-1,target);
        }else{
            return binarySearch(nums,0,k,target);
        }
    }
};