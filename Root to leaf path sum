class Solution {
  public:
    bool hasPathSum(Node *root, int target) {
        // codeGenius
        //base case
        if(root==NULL){
            return false;
        }
        //recursive case
        if(root-> left ==NULL && root->right == NULL){
            return target==root->data;
        }
        int newtarget=target - root->data;
        return hasPathSum(root->left,newtarget) || hasPathSum(root->right,newtarget);
    }
};
