class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
      stack<TreeNode*>st;
      vector<int>v;
      TreeNode* node=root;
      while(true)
      {
          if(node!=NULL)
          {
              st.push(node);
              node=node->left;
          }
          else
          {
              if(st.empty())break;
              TreeNode* temp=st.top();
              st.pop();
              v.push_back(temp->val);
              node=temp->right;
          }
      }
      return v;
    }
};