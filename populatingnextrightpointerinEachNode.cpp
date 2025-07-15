
//populating next right pointer in each node
// code is correct but you need to write main function  and also    
// include iostream and using namespace std;
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return nullptr;

        Node* curr = root->next;
        while (curr) {
            if (curr->left) {
                curr = curr->left;
                break;
            }
            if (curr->right) {
                curr = curr->right;
                break;
            }
            curr = curr->next;
        }

        if (root->right) root->right->next = curr;
        if (root->left) root->left->next = root->right ? root->right : curr;

        connect(root->right);
        connect(root->left);

        return root;
    }
};
