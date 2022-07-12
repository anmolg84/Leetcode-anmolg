class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n = nums.size();
        while(n!=1){
            vector<int> vc(n/2);
            for(int i=0;i<n/2;i++){
                if(i%2==0) vc[i] = min(nums[2*i],nums[2*i+1]);
                else vc[i] = max(nums[2*i],nums[2*i+1]);
            }
            nums=vc;
            n--;
        }
        return nums[0];
    }
};