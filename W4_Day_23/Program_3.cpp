class Solution {
public:

     pair<int,int> diameterheight(TreeNode* root){

            if(root==NULL){
             pair<int,int> p;
             p.first=0;
             p.second=0;
             return p;
          }
          pair<int,int> leftans=diameterheight(root->left);
          pair<int,int> rightans=diameterheight(root->right);
          int lh =leftans.first;
          int ld =leftans.second;
          int rh =rightans.first;
          int rd =rightans.second;

          int height=1 + max(lh,rh);
          int diameter= max(lh+rh,max(ld,rd));
          pair<int,int>p;
          p.first=height;
          p.second=diameter;
          return p;
         }
    int diameterOfBinaryTree(TreeNode* root) {
        pair<int,int> x= diameterheight(root);
        return x.second;
     }
};