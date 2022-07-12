**1850. Minimum Adjacent Swaps to Reach the Kth Smallest Number**
1. Approach 1: Generate all possible permutation using recurrsion , find current string + k and compare ; Time : O(N!+N)
2. Approach 2: Using next_permutation made num until k-- and then compare by actual swapping , i: 0->n
int j = i;
if(str[i]!=num[i]){
while(num[j]!=str[i]) i++;
while(i>j){
swap(str[i],str[i-1]);
i--;
ans++;
Time: O(KN+N)