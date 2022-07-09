class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int num_maxi = INT_MIN;
        int maxi = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum<0) sum=0;
            maxi = max(sum,maxi);
            num_maxi = max(num_maxi,nums[i]);
        }
        if(maxi==0) maxi = num_maxi;
        return maxi;
    }
};