void travel(TreeNode* root1,vector<int>&arr){
        //base case 
        if(root1 == NULL){
            return ;
        }

        //leaf node check
        if(root1 -> left == NULL && root1 -> right == NULL){
            arr.push_back(root1 -> val);
        }
         //go left part then right part inorder
          if(root1 -> left){
            travel(root1 -> left,arr);
          }
          if(root1 -> right){
            travel(root1 -> right,arr);
          }    
    }
     bool check(vector<int>v1,vector<int>v2,bool &ans){
        int s1 = v1.size();
        int s2 = v2.size();
        if(s1 != s2){
            ans = false;
            return ans;
        }
        for(int i = 0;i < s1; i++){
            if(v1[i] != v2[i]){
                ans = false;
                return ans;
                break;
            }
        }
       ans = true;
       return ans;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
         bool ans = true;
        vector<int>v1;
        vector<int>v2;
        travel(root1,v1);
        travel(root2,v2);
        //check order of leaf node
        check(v1,v2,ans);
        return ans;
    }