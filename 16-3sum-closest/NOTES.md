**16. 3Sum Closest**
1. Approach 1: 3 nested loop store each sum in vector and then return the closest one; Time: O(N^3+NlogN+N)
2. Approach 2: Use two pointer approach and store sum in vector and return closest one : Time:O(N^2+N+NlogN)
3. Approach 3: Similar to 3 sum problem 1 Loop + Two pointer Approach +keep track of min difference sum as ans = abs(sum-target)>abs(ans-target)? ans:sum and return ans; Time: O(N^2+NlogN) {Optimized Approach}