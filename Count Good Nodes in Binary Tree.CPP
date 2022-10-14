class Solution {
public:
    
    void solve(TreeNode* root, int &ans,int maxe){
        if(root==NULL)return;
        if(root->val>=maxe)ans++;
        if(root->val>maxe){
            maxe=root->val;
        }
        solve(root->left,ans,maxe);
        solve(root->right,ans,maxe);
    }
    int goodNodes(TreeNode* root) {
        int ans = 0;
        int maxe = root->val;
        solve(root,ans,maxe);
        return ans;
    }
};
