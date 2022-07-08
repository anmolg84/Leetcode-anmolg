class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        unsigned int ans = 0;
        for(int i=31;i>=0;i--){
            if(n&1){
                ans+=(1<<i);
            }
            n>>=1;  
        }
        return ans;
    }
};