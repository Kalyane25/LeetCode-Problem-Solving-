
// code is correct but you need to write main function  and also 
// include iostream and using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int PathSum(TreeNode* root, int &sum){
    if(root==NULL){
        return 0;
    }
    
    
    int left = max(0, PathSum(root->left, sum));
     int right = max(0, PathSum(root->right, sum));

    // if left and right both exists 
    //if(root->left&& root->right)
        sum=max(sum,root->val+left+right);
        return root->val+max(left,right);
    
    //if only left or only right 
    //return root->left ? root->val + left : root->val + right;

}
    int maxPathSum(TreeNode* root) {
        int sum = INT_MIN;
        PathSum(root, sum);
        return sum;
    }
};