**4. Median of Two Sorted Arrays**
1. Approach 1: store num1 and num2 in another vector , sort  and return median; Time: O(N+M+(N+M)log(N+M)+1)
2. Approach 2: Maintain a count and iterate over both array simultaneously whenever it is half of (n+m) return median; Time: O(N+M)
3. Approach 3: Using Binary Search : O(Log(M+N)) (Refer striver) {Optimized Approach}