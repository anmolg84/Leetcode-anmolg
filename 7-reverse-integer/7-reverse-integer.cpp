class Solution {
public:
    int reverse(int x) {
        long long ans = 0;
        bool neg = x<0 ? true : false;
        x = abs(x);
        while(x!=0){
            if(ans*10>INT_MAX || ans*10<INT_MIN) return 0;
            ans = ans*10 + x%10;
            x/=10;
        }
        if(neg) ans*=-1;
        return ans;
    }
};