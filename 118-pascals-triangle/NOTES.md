**118. Pascal's Triangle**
1. Approach 1: Using nCr formula each element is m-1Cc-1 where m: 1->n and c:1->r; Time : O(N^2)
2. Approach 2: Using Pascal Property and iteration over each row we can set values by iterating inner one from 1->i; Time: O(N^2)