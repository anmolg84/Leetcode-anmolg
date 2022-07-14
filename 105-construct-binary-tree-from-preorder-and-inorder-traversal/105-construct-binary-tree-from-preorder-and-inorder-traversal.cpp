class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int rootIdx = 0;
        unordered_map<int,int> hmap;
        for (int i=0; i< inorder.size(); i++) {
            hmap[inorder[i]] = i;
            //value -> index mapping for inorder array
        }
        return build(preorder, inorder, rootIdx, 0, inorder.size()-1, hmap);
    }
    
    //***Note*** that rootIdx is passed as reference 
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int &rootIdx, int left, int right, unordered_map<int,int> &hmap) {
        if(left > right) return nullptr;
        
        int pivot = hmap[preorder[rootIdx]];
        TreeNode* node = new TreeNode(inorder[pivot]); //inorder[pivot] == prorder[rootIdx]
        rootIdx++;
        
        node->left = build(preorder, inorder, rootIdx, left, pivot-1, hmap);
        //rootIdx value gets changed after successive calls to build the left subtree
        //Since it is passed as reference, updated value of rootIdx is passed to build
        //the right subtree
        node->right = build(preorder, inorder, rootIdx, pivot+1, right, hmap);
             
        return node;
    }
};