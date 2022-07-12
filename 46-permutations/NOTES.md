**46. Pemutations**
1. Approach 1: Generate all permutation using next_permutation function and then sort ; Time: O(N! + N!logN!)
2. Approach 2: Using Recurrsion : mainatain a freq array if element is taken or not and curr ds as vc if(vcsize =n ) push in vc else iterate over array and check which element is not taken take it and backtrack ; Time: O(N!)