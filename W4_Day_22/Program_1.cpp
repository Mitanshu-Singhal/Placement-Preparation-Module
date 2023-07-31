void solve(TreeNode *root,vector<int>&answer)

{

    if(root==NULL)

    {

        return;

    }

    answer.push_back(root->data);

    solve(root->left,answer);

    solve(root->right,answer);

}

vector<int> getPreOrderTraversal(TreeNode *root)

{

    vector<int>answer;

    solve(root,answer);

    return answer;

}