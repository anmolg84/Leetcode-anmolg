class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index1,index2;
        for(index1=n-2;index1>=0;index1--){
            if(nums[index1]<nums[index1+1]){
                break;
            }
        }
        if(index1<0){
            reverse(nums.begin(),nums.end());
        }
        else{
            for(index2=n-1;index2>index1;index2--){
                if(nums[index1]<nums[index2]){
                    break;
                }
            }
            int temp = nums[index1];
            nums[index1]=nums[index2];
            nums[index2]=temp;
            reverse(nums.begin()+index1+1,nums.end());
        }
    }
};