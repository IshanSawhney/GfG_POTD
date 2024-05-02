class Solution
{
    public:
    //preorder traversal 
    void preorder(Node * root, vector<int> &ans){
        if(root==NULL){
            ans.push_back(-1);
            return;
        }
        ans.push_back(root->data);
        preorder(root->left,ans);
        preorder(root->right,ans);
    }
       //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) 
    {
        vector<int> ans;
        preorder(root,ans);
        return ans;
    }
    
    //Function to deserialize a list and construct the tree.
    int i=0;
    Node * deSerialize(vector<int> &A)
    {
       //Your code here
       int value=A[i];
       i++;
       if(value==-1)
       return NULL;
       
       Node *newNode=new Node(value);
       newNode->left=deSerialize(A);
       newNode->right=deSerialize(A);
        return newNode;
       
    }

};
