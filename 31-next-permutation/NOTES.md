**31. Next Permutation**
1. Approach 1: Using next_permutation function of stl; Time: O(N)
2. Approach 2: Generate all possible permutation and return next greater permutation; O(N!+N)
3. Approach 3: index1 : n-2->0 break if num[index1]<nums[index1+1] , if index1 not found reverse and return else index2 : n-1->index1 breakif num[index1]<nums[index2], swap index1 and index2, reverse from index1 till end; Time: O(N+N+N)