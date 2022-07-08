class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // Approach 1
        // int ans = 0;
        // int sum = 0;
        // int n = nums.size();
        // map<int,int> mp;
        // for(int i=0;i<n;i++){
        //     sum+=nums[i];
        //     if(sum==k) ans++;
        //     if(mp.find(sum-k)!=mp.end()){
        //         ans+=(mp[sum-k]);
        //     }
        //     mp[sum]++;
        // }
        // return ans;
        // Approach 2
        int n = nums.size();
        vector<int> prefix(n);
        prefix[0] = nums[0];
        for(int i=1;i<n;i++) prefix[i] = nums[i]+prefix[i-1];
        map<int,int> mp; int ans = 0;
        for(int i=0;i<n;i++){
            if(prefix[i]==k) ans++;
            if(mp.find(prefix[i]-k)!=mp.end()){
                ans+=mp[prefix[i]-k];
            }
            mp[prefix[i]]++;
        }
        return ans;
    }
};