**3. Longest Substring Without Repeating Characters**
1. Approach 1: Generate all possible substring and check if non repeating and return the largest one; Time: O(N^2+N+N)
2. Approach 2: Using Sliding Window technique check if that particular character has occoured before then choose l = max(l,mp[s[r]]+1) and keep updating for mp[s[r]] = r and keep track of maximum of ans, (r-l+1); Time: O(N)