// p236 二叉树的最近公共祖先

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //判断边界条件
        if(root == NULL || root == p || root == q) return root;
        //递归
        TreeNode* left =  lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        //递归后处理
        /*
        1. 左右子树的返回值都不为null, 由于值唯一左右子树的返回值就是p和q, 此时root为LCA
        2. 如果左右子树返回值只有一个不为null, 说明只有p和q存在与左或右子树中, 最先找到的那个节点为LCA
        3. 左右子树返回值均为null, p和q均不在树中, 返回null
        */
        if(left == NULL) return right;
        if(right == NULL) return left;
        //p和q在公共祖先的两边
        if(left && right)  return root;

        return NULL;
    }
};

