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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>s1;
        if(root==NULL) return ans;
        s1.push(root);
        while(!s1.empty()){
            int size= s1.size();
            vector<int>level;
           for(int i=0; i<size;i++){
                    TreeNode * temp= s1.front();
                    s1.pop();
                    level.push_back(temp->val);
                    if(temp->left){
                        s1.push(temp->left);
                    }
                      if(temp->right){
                        s1.push(temp->right);
                    }
                }
            
            ans.push_back(level);
        }
        return ans;
    }
};