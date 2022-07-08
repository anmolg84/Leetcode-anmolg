**371. Sum of Two Integers**
1. Approach 1: return a + b; Time : O(1)
2. Approach 2: if any one integer is positive loop over it and that many times 1 on other integer; Time: O(max(a,b))
3. Approach 3: Using Bit manipulation : while(b){
unsigned carry = a & b;
a = a ^ b;
b = carry << 1;
cout << a << b << " ";
}
return a; Time : O(b)