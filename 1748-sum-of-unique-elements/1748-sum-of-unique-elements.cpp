class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        map<int,int> mp;
        for(int i=0;i<n;i++) mp[nums[i]]++;
        for(auto i:mp) if(i.second==1) ans+=i.first;
        return ans;
    }
};