/* Structure of binary tree node
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
   bool isSymmetric(Node* root) {
       if (!root) return true;
       return isMirror(root->left, root->right);
   }

   bool isMirror(Node* leftNode, Node* rightNode) {
       if (!leftNode && !rightNode)
           return true;

       if (!leftNode || !rightNode)
           return false;

       return (leftNode->data == rightNode->data) &&
              isMirror(leftNode->left, rightNode->right) &&
              isMirror(leftNode->right, rightNode->left);
   
    }
};