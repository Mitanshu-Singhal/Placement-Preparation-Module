class Solution {
  public:
    void dfs(Node* root, map<int, Node*>& m, map<Node*, int>& hg, int x, int h) {
        if (root == NULL) return;
        hg[root] = h;
        if (m[x] == NULL) m[x] = root;
        else if (hg[m[x]] <= hg[root]) {
            m[x] = root;
        }
        dfs(root->left, m, hg, x - 1, h + 1);
        dfs(root->right, m, hg, x + 1, h + 1);
    }

    vector <int> bottomView(Node *root) {
        if (root == NULL) return {};
        map<int,Node*> m;
        map<Node*, int> hg;
        dfs(root, m, hg, 0, 0);
        vector<int> ans;
        for (auto x: m) {
            ans.push_back(x.second->data);
        }
        return ans;
    }
};