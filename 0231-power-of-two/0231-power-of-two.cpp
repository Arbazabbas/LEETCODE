#include<cmath>
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1)
            return false;
        for(int i=0; i<=31; i++){
            if(pow(2,i)==n){
                return true;
            }
        }
        return false;
    }
};