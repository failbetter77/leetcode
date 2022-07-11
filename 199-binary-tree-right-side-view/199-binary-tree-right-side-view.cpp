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
    vector<int> rightSideView(TreeNode* root) {
        if(!root){
            return {};
        }
        
        vector<int> v;
        
        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);           
                        
        TreeNode* cur;
        while(!q.empty()){
            if(q.front()!=nullptr){
                cur=q.front();
                q.pop();
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);              
            } else{
                v.push_back(cur->val);
                q.pop();
                if(!q.empty()){
                    q.push(nullptr);
                }
                
            }
            
        }
        return v;
        
    }
};