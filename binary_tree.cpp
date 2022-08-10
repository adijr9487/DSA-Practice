#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class TreeNode {
    public:
        int val;
        TreeNode* left;
        TreeNode* right;

        TreeNode(int val){
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

 
void print_tree_io(TreeNode* root){
    if(root == nullptr)
        return;

    print_tree_io(root->left);
    cout << root->val << " ";
    print_tree_io(root->right);

}

int main()
{
    //create tree
    TreeNode *head = new TreeNode(21);
    head->left = new TreeNode(30);
    head->left->left = new TreeNode(32);
    head->left->right = new TreeNode(28);
    head->right = new TreeNode(56);

    print_tree_io(head);

    return 0;
}