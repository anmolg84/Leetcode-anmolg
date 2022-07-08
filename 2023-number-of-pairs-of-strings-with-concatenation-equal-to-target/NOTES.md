**2023. Number of Pairs of Strings With Concatenation Equal to Target**
1. Approach 1: 2 nested loops and simply check if nums[i]+nums[j] = taget then ans++; Time: O(N^2)
2. Approach 2: Using Hashmap , map all the values of nums and check for each front and back substr in target for nums[i] if present; Time: O(N) {Optimized Approach}