
//589. N叉树的前序遍历
// 二叉树的遍历法  或者迭代方法
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> vRes;//模拟栈
    vector<int> preorder(Node* root) {
        if(!root)   return vRes;
        vRes.push_back(root -> val);
        for(auto iter = root->children.begin();iter !=root->children.end();++iter){
            preorder(*iter);
        }
        return vRes;
    }
};


