class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> ump;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(ump.find(nums[i])!=ump.end()){
                return true;
            }
            else{
                ump[nums[i]]=i;
            }
        }
        return false;
    }
};