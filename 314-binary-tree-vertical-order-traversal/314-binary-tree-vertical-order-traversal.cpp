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
    vector<vector<int>> verticalOrder(TreeNode* root) {
        vector<vector<int>> output;
        
        if(!root){
            return output;
        }
        
        
        queue<pair<int,TreeNode*>> q;
        map<int, vector<int>> m;
        q.push(make_pair(0,root));
        
        while(!q.empty()){
            //int size = q.size();
            //for(int i=0; i<size; i++)
            {
                TreeNode* t = q.front().second;
                int num = q.front().first;
                q.pop();
                m[num].push_back(t->val);
                if(t->left)
                    q.push(make_pair(num-1, t->left));
                if(t->right)
                    q.push(make_pair(num+1, t->right));
            }
        }
        
        for(auto& v : m){
            output.push_back(v.second);
        }
        return output;
  
    }
};