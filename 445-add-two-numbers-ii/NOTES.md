**445. Add Two Numbers II**
1. Approach 1: convert linked list into number1 and number 2 , add and then make new linked list ; Time : O(n1+n2+(n1+n2)) {Gives Runtime error}
2. Approach 2: Convert both the linked list into string str1 and str2 , then add two string simply and reverse the string and make new linked list and return; Time : O(n1+n2+max(n1,n2)+carry+(n1+n2)) {Handles overflow}