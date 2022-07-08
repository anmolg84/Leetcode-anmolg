class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MIN;
        map<int,int> mp;
        int l=0,r=0; int sum = 0;
        while(r<n){
            sum+=nums[r];
            mp[nums[r]]++;
            while(mp.size()<r-l+1){
                sum-=nums[l];
                mp[nums[l]]--;
                if(mp[nums[l]]==0) mp.erase(nums[l]);
                l++;
            }
            if(mp.size()==r-l+1) ans = max(ans,sum);
            r++;
        }
        return ans;
    }
};