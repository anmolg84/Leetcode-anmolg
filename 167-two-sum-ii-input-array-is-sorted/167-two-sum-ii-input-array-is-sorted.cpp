class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        unordered_map<int,int> mp;
        int n = numbers.size();
        for(int i=0;i<n;i++){
            if(mp.find(target-numbers[i])!=mp.end()){
                ans.push_back(i+1); ans.push_back(mp[target-numbers[i]]+1);
                sort(ans.begin(),ans.end());
                return ans;
            }
            else{
                mp[numbers[i]]=i;
            }
        }
        return ans;
    }
};