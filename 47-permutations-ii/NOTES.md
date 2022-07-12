**47. Permutations II**
1. Approach 1: Generate all permutation using next_permutation function and then sort ; Time: O(N! + N!logN!)
2. Approach 2: Using Recurrsion : mainatain a map maintaining a count if it is positive take it and curr ds as vc if (i =n ) push in ans else iterate over map and check which element can be  taken take it and backtrack ; Time: O(N!)