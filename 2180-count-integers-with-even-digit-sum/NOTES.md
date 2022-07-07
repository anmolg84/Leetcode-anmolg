**2180. Count Integers With Even Digit Sum**
1. Approach 1: for each value from [1,num] check sum, if even ans++; Time : O(NlogN)
2. Approach 2: check if num is having even sum or not if yes then return (num/2) else (num-1)/2 ; Time : O(1)