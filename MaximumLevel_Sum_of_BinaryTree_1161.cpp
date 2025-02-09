int maxLevelSum(TreeNode* root) {
    if(root == NULL){
        return 0;
    }
    
    queue<TreeNode*> Q;
    Q.push(root);

    int maxSum = INT_MIN , level = 1, resultLevel = 1;

    while(!Q.empty()){
        int size = Q.size();
        int levelSum =0;
        
        for(int i=0;i<size;i++){
            TreeNode* curr = Q.front();
            Q.pop();

            levelSum += curr->val;

            if(curr->left != NULL){
                Q.push(curr->left);
            }

            if(curr->right != NULL){
                Q.push(curr->right);
            }
        }
        if(levelSum > maxSum){
            maxSum = levelSum;
            resultLevel = level;
        }
        level++;
    }
    return resultLevel;
}