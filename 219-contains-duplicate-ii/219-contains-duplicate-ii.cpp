class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> mp;
        int n = nums.size();
        if(n==1) return false;
        for(int i=0;i<n;i++){
            if(mp.find(nums[i])!=mp.end()){
                if(abs(mp[nums[i]]-i)<=k) return true;
            }
            mp[nums[i]]=i;
        }
        return false;
    }
};