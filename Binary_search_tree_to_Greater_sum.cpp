#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    TreeNode* bstToGst(TreeNode* root) {
     if(root) root->val=root->val+ bstToGst(root->right);
    if(root->left) bstToGst(root->left);
    if(root->right)  bstToGst(root->right);
     return root->val;
    }
};