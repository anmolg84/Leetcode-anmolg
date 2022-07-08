class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Approach 1
        // int n = nums.size();
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target){
        //             return vector<int>{i,j};
        //         }
        //     }
        // }
        // return vector<int>{};
        // Approach 2
        vector<int> ans;
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(mp.find(target-nums[i])!=mp.end()){
                ans.push_back(i);
                ans.push_back(mp[target-nums[i]]);
                return ans;
            }
            else{
                mp[nums[i]]=i;
            }
        }
        return ans;
    }
};