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
    // ye code chal to raha hai per approach sahi nahi hai apne ko value se hi nahi balki structure se bhi check karna hai
    //     void inorder(TreeNode* p , TreeNode* q,int &k){
    //         if(p==NULL && q==NULL) return;
    //         if(p==NULL || q==NULL)  {  k=1;  return ;}

             
    //         inorder(p->left,q->left,k);
    //         if(p->val != q->val){ k=1;  return;}
    //         inorder(p->right,q->right,k);
    //     }
    // bool isSameTree(TreeNode* p, TreeNode* q) {
    //      int k=0;
    //    inorder(p,q,k);
      
    //    if(k){
    //     return false;
    //    }else{
    //     return true;
    //    }
      bool isSameTree(TreeNode* p, TreeNode* q) {
          if(p==NULL && q==NULL) return true;
          if(p==NULL || q==NULL) return false;
          if(p->val != q->val)   return false;

         return isSameTree(p->left, q->left) && isSameTree(p->right , q->right);
    }
};