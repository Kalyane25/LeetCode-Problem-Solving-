
\#include <iostream>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int SumRootToLeaf(TreeNode* root, int currentval) {
        if (root == NULL) {
            return 0;
        }
        currentval = currentval * 10 + root->val;
        if (root->left == NULL && root->right == NULL) {
            return currentval;
        }
        int left = SumRootToLeaf(root->left, currentval);
        int right = SumRootToLeaf(root->right, currentval);
        return left + right;
    }

    int sumNumbers(TreeNode* root) {
        return SumRootToLeaf(root, 0);
    }
};

int main() {
    // Construct the binary tree:
    //       1
    //      / \
    //     2   3
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    Solution sol;
    int result = sol.sumNumbers(root);
    cout << "Sum of root-to-leaf numbers: " << result << endl;

    // Clean up the heap (avoid memory leak)
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
