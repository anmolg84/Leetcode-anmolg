**1695. Maximum Erasure Value**
1. Approach 1: Generate all possible subarray and return with maximum sum and unique values; Time: O(N^2 + N)
2. Approach 2: Using Sliding Window Technique
3. while(r<n){
sum+=nums[r];
mp[nums[r]]++;
while(mp.size()<r-l+1){
sum-=nums[l];
mp[nums[l]]--;
if(mp[nums[l]]==0) mp.erase(nums[l]);
l++;
}
if(mp.size()==r-l+1) ans = max(ans,sum);
r++;
}; Time : O(N)