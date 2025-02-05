int solve(TreeNode* root, long long sum, int target, unordered_map<long long, int> &mpp) {
        if(!root) return 0;
        sum += root->val;
        int count = mpp[sum - target];
        mpp[sum]++;
        count += solve(root->left, sum, target, mpp);
        count += solve(root->right, sum, target, mpp);
        mpp[sum]--;


        return count;
    }

    int pathSum(TreeNode* root, int target) {
        unordered_map<long long, int> mpp;
        mpp[0] = 1;
        return solve(root, 0, target, mpp);
    }