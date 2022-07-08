**653. Two Sum IV - Input is a BST**
1. Approach 1: Using Inorder Traversal + Two sum on vector; Time : O(2N)
2. Approach 2: Using unordered_set, if s.count(k-root->val)!=0 we can return true else insert root->val and return findTarget(root->left, k) || findTarget(root->right, k); Time: O(N)