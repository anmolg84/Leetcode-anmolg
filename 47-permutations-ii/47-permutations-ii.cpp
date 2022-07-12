class Solution {
public:
    map<int,int> mp;
    void Permute(int i,int n,vector<vector<int>> &ans,vector<int> &nums, vector<int> &vc){
        if(i==n){
            ans.push_back(vc);
            return;
        }
        for(auto &x:mp){
            if(x.second>0){
                x.second--;
                vc.push_back(x.first);
                Permute(i+1,n,ans,nums,vc);
                vc.pop_back();
                x.second++;
            }
        }
        
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++) mp[nums[i]]++;
        vector<int> vc;
        vector<vector<int>> ans;
        Permute(0,n,ans,nums,vc);
        return ans;
    }
};