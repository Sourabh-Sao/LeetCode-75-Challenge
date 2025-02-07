 TreeNode* sol(TreeNode* root,TreeNode* p,TreeNode* q){
        if(root==NULL){
            return NULL;
        }
        if(root==p or root==q){
            return root;
        }
        TreeNode* l=sol(root->left,p,q);
        TreeNode* r=sol(root->right,p,q);
        
        if(l==NULL){
            return r;
        }
        if(r==NULL){
            return l;
        }
        return root;
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return sol(root,p,q);
    }