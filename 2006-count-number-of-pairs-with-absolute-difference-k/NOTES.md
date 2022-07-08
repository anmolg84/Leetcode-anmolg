**2006. Count Number of Pairs With Absolute Difference K**
1. Approach 1: 2 Nested loops and check for each i and j whether abs = k then count++; Time : O(N^2)
2. Approach 2: Using Map check for nums[i]+k and nums[i]-k in map and add respective count of nums[i]+k and nums[i]-k in ans , at last add it to the map[nums[i]]++; Time: O(N)