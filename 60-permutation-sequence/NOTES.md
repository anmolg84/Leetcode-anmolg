**60. Permutation Sequence**
1. Approach 1: Generate all possible permutation using recurrsion and return k-1th; Time: O(N!)
2. Approach 2: Direct Detection Method -> find fact(n-1), nums array and itearte, ans+=nums[k/fact] ,nums.erase-> nums[k/fact], k%=fact , fact/=size. Time: O(N)