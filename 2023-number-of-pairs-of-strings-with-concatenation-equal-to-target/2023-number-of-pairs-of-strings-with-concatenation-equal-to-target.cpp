class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        // Approach 1
        int ans = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && nums[i]+nums[j]==target) ans++;
            }
        }
        return ans;
    }
};