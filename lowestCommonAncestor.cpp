
// code is correct but you need to write main function  and also
// include iostream and using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// lowest common ancestor in a binary tree leeetcode 236
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) 
        return NULL;
        if(root->val==p->val|| root->val==q->val){
            return root;
        }
       TreeNode* leftlca=lowestCommonAncestor(root->left,p,q);
       TreeNode* rightlca=lowestCommonAncestor(root->right,p,q);
        if(leftlca && rightlca){
        return root;
        }
        else if(leftlca !=NULL){
            return leftlca;
        }
        else 
        return rightlca;
    }
};