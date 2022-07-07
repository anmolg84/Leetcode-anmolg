class Solution {
public:
    int hammingDistance(int x, int y) {
        // Approach 1
        // int ans = 0;
        // for(int i=0;i<32;i++){
        //     if(((x & (1<<i)) && !(y & (1<<i))) || (!(x & (1<<i)) && (y & (1<<i)))){
        //         ans++;
        //     } 
        // }
        // return ans;
        // Approach 2
        int ans = 0;
        int value = x^y;
        for(int i=0;i<32;i++){
            if(value & (1<<i)) ans++;
        }
        return ans;
    }
};