class Solution {
public:
    int countEven(int num) {
        int ans = 0;
        for(int i=1;i<=num;i++){
            int var = i; int sum = 0;
            while(var!=0){
                sum+=(var%10);
                var/=10;
            }
            if(sum%2==0) ans++;
        }
        return ans;
    }
};