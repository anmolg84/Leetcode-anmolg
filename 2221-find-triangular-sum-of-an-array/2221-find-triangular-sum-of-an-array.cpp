class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        while(n!=1){
            vector<int> vc(n-1);
            for(int i=0;i<n-1;i++){
                vc[i] = (nums[i]+nums[i+1])%10;
            }
            nums=vc;
            n--;
        }
        return nums[0];
    }
};