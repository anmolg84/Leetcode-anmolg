class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        vector<int> vc;
        int n  = nums.size(); long long ans=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int front = i+1;
            int back = n-1;
            while(front<back){
                long long sum = nums[i]+nums[front]+nums[back];
                if(sum==target) return sum;
                else if(sum>target) back--;
                else front++;
                ans = abs(sum-target)>abs(ans-target)? ans:sum;
            }
        }
        return ans;
    }
};