class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> output;
        if(root==nullptr){
            return output;
        }
        
        queue<TreeNode*> pq;
        pq.push(root);
        while(!pq.empty()){
           
            int n=pq.size();
            vector<int> temp(n,0);
            for(int i=0;i<n;i++){
                 auto curr=pq.front();
                if(curr->left) pq.push(curr->left);
                if(curr->right) pq.push(curr->right);
                temp[i]=curr->val;
                pq.pop();
            }
            output.push_back(temp);
           // temp.erase();
        }

        return output;
    }
};