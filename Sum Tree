class Solution {
  public:
    int traverse(Node* root){
        if(root==NULL) return 0;
        int left=traverse(root->left);
        int right=traverse(root->right);
        return root->data + left +right;
        
    }
    bool isSumTree(Node* root) {
        //CodeGenius
        if(root==NULL) return true;
        if(root->left==NULL && root->right==NULL) return true;
        if(root->left != NULL || root->right != NULL){
            if(root->data != traverse(root->left) + traverse(root->right)){
                return false;
            }
        }
        return isSumTree(root->left) && isSumTree(root->right);
    }
};
