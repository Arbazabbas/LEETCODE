class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        set<int>st;
        vector<int>v;
        for(int i=0; i<n; i++){
            if(st.count(nums[i])){
                v.push_back(nums[i]);
            }
            else{
                st.insert(nums[i]);
            }
        }
        return v;
    }
};