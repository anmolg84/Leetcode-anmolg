**217. Contains Duplicate**
1. Approach 1: Maintain a count of each value in hashmap and iterate over hashmap if any count >=2 immedietly return true else false; Time: O(N+N)
2. Approach 2:Maintain count in hashmap find if numer is present if  not mp[nums[i]]++; else return true; Time: O(N)