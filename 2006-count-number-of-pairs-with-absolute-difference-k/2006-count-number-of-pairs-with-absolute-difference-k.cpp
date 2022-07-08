class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        // Approach 1
        // int count=0;
        // for(int i=0;i<nums.size()-1;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(abs(nums[i]-nums[j])==k && i<j){
        //           count++;  
        //         } 
        //     }
        // }
        // return count;
        // Approach 2
        int ans = 0;
        int n = nums.size();
        map<int,int> mp;
        // sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(mp.find(k+nums[i])!=mp.end()){
                ans+=mp[k+nums[i]];
            }
            if(mp.find(nums[i]-k)!=mp.end()){
                ans+=mp[nums[i]-k];
            }
            mp[nums[i]]++;
        }
        return ans;
    }
};