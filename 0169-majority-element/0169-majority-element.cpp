#include<unordered_map>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
      /*  int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=nums[n/2];
        return ans;*/
        int n=nums.size()/2;
        unordered_map<int,int>mapp;
        for(int i=0; i<nums.size(); i++){
            mapp[nums[i]]++;
        }
        int ans=0;
        for(auto a: mapp){
            if(a.second>n){
                ans= a.first;
            }
        }
     return ans;  
    }
};