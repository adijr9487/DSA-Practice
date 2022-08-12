//g++ -std=c++11 binary_tree.cpp -o binary_tree && ./binary_tree
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val)
    {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

//             L          R
//      -----------------------------
// pre    ROOT |          |
// in          |   ROOT   |
// Post        |          |    ROOT

void inOrderTree(TreeNode *root)
{
    if (root == nullptr)
        return;

    inOrderTree(root->left);
    cout << root->val << " ";
    inOrderTree(root->right);
}

void preOrderTree(TreeNode *root){
    if(root == nullptr)
        return;

    cout << root->val << " ";
    preOrderTree(root->left);
    preOrderTree(root->right);
}

void postOrderTree(TreeNode* root){
    if(root == nullptr)
        return;

    postOrderTree(root->left);
    postOrderTree(root->right);
    cout << root->val << " ";
}


//height
int getHeight(TreeNode* root){

    if(root == nullptr)
        return 0;

    return 1+max(getHeight(root->left), getHeight(root->right));

}

bool isBalanced(TreeNode* root){
    if(root == nullptr)
        return true;

    if(isBalanced(root->left) == false)
        return false;
    if(isBalanced(root->right) == false)
        return false;
    
    //abs(h-left - h-right) <= 1
    if(abs(getHeight(root->left) - getHeight(root->right)) <= 1)
        return true;
    else
        return false;
}

int main()
{
    // create tree
    TreeNode *head = new TreeNode(21);
    head->left = new TreeNode(30);
    head->left->left = new TreeNode(32);
    // head->left->left->left = new TreeNode(52);
    // head->left->left->right = new TreeNode(82);
    head->left->right = new TreeNode(28);
    head->right = new TreeNode(56);

    // inOrderTree(head);
    // cout << "\n";
    // preOrderTree(head);
    // cout << "\n";
    // postOrderTree(head);

    // cout << getHeight(head) << " ";
    cout << isBalanced(head) << " ";

    return 0;
}