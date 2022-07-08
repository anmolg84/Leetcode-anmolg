**560. Subarray Sum Equals K**
1. Approach 1: Generate all possible subarray sum and count number  of subarray sum with equal k; Time: O(N^2)
2. Approach 2: Using countinuos sum and hashmap if sum=k count++ and also add the number of time sum-k is present in map , at last add sum to map; Time : O(N) {Exactly similar to count total number of subarray with given XOR}
3. Approach 3: Using Prefix sum calculate prefix sum and repeat above steps; Time: O(N)