**190. Reverse Bits**
1. Approach 1: Reverse bits by iterating from reverse and convert it into original integer; Time: O(32+32)
2. Approach 2: Using bit manipulation
3.  for(int i=31;i>=0;i--){
if(n&1){
ans+=(1<<i);
}
n>>=1;
}; Time : O(32)