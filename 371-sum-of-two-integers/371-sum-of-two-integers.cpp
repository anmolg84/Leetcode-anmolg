class Solution {
public:
    int getSum(int a, int b) {
        // // Approach 1
        // return a+b;
        // // Approach 2 (if a and b both are positive)
        // for(int i=1;i<=b;i++){
        //     a+=1;
        // }
        // return a;
        // Approach 3 (if a and b both are positive)
        while(b){
            unsigned carry = a & b;
            a = a ^ b;
            b = carry << 1;
        }
        return a;
    }
};