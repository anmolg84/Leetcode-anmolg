**88. Merge Sorted Array**
1. Approach 1: Copy num2 and num1 to another vector and sort;  Time: O(N+M+(N+M)log(N+M))
2. Approach 2: Copy num2 to num1 and then just sort num1; Time: O(M+(N+M)log(N+M))
3. Approach 3: Use Two Way Merging Compare each element of num1 and num2 then swap and sort the other ones; O(N+(N+M)log(N+M))
3. Approach 4: Using Gap Algorithm Refer GFG for more: