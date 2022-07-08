**1. Two Sum**
1. Approach 1: Using Nested Loops for i and j check if nums[i]+nums[j]=target then return; Time : O(N^2)
2. Apprach 2: Using Hashmap find (target-nums[i]) in map if found return i,mp[target-nums[i]] else add it to the map (mp[nums[i]]=i) ; Time : O(N) {optimized solution}