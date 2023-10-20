class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int pos=0;
        int dest=0;
        int jump=0;
        if(n<=1){
            return true;
        }
        for(int i=0; i<n-1; i++){
            dest=max(dest,nums[i]+i);
                if(pos==i){
                    pos=dest;
                    jump++;
                }
                if(pos>=n-1){
                   // return jump;
                    return true;
                }
        }
        return false;
    }
};