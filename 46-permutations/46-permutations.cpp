class Solution {
public:
    void recur(vector<int>& nums,vector<int> &vc,vector<vector<int>> &ans,vector<int> &freq){
        if(vc.size()==nums.size()){
            ans.push_back(vc);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                vc.push_back(nums[i]);
                freq[i]=1;
                recur(nums,vc,ans,freq);
                vc.pop_back();
                freq[i]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> vc;
        vector<int> freq(nums.size(),0);
        recur(nums,vc,ans,freq);
        return ans;
    }
};