#include <iostream>
#include <queue>

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}};


TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2);
int main(){
    //try making my own trees;
    TreeNode *leftNode = new TreeNode();
    TreeNode *rightNode= new TreeNode();
    TreeNode *twoLeft = new TreeNode();
    TreeNode *twoRight = new TreeNode();


    //[1,3,2,3->left->val = 5]
    TreeNode *oneRoot = new TreeNode(1, leftNode, rightNode);
    oneRoot->left->val = 3;
    oneRoot->right->val = 2;
    oneRoot->left->left = new TreeNode(5);


    //[2,1,3,null,4,null,7]
    TreeNode *twoRoot = new TreeNode(2, twoLeft, twoRight);
    twoRoot->left->val = 1;
    twoRoot->right->val = 3;
    twoRoot->left->right = new TreeNode(4);
    twoRoot->left->right = new TreeNode(7);

    mergeTrees(oneRoot,twoRoot)
;

}

TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2){
    std::queue<int> myQueue;
    TreeNode* temp = root1->left;
    TreeNode* temp2 = root2->left;
    TreeNode* solution = new TreeNode();

    solution->val = root1->val + root2->val;
    while(temp!=nullptr){
        solution->left = new TreeNode(root1->val);
        temp= temp->left;

    }

    while(temp2 != nullptr){
        myQueue.push();

    }

    temp = root1->right;

    while(temp!= nullptr){
        myQueue.push(temp->val);
        temp=temp->right;
    }


    
}