class Solution {
public:
    int countEven(int num) {
        // Approach 1
        // int ans = 0;
        // int var,sum;
        // for(int i=1;i<=num;i++){
        //     var = i; sum = 0;
        //     while(var!=0){
        //         sum+=(var%10);
        //         var/=10;
        //     }
        //     if(sum%2==0) ans++;
        // }
        // return ans;
        // Approach 2
        int sum =  0; int temp = num;
        while(num!=0){
            sum+=(num%10);
            num/=10;
        }
        if(sum%2==0) return (temp/2);
        return (temp-1)/2;
    }
};