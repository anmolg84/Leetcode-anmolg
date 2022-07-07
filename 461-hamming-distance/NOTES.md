**461. Hamming Distance**
1. Approach 1: Check for each bit in x and y if they appear to be different ans++ (num & (1<<i)); Time : O(32)
2. Approach 2: Just Xor x and y = value , check for each bit in value how many bits are set; Time: O(32)