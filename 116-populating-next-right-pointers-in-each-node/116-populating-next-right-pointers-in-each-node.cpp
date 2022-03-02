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
        if(!root) return nullptr;
        queue<Node*> p;
        p.push(root);
        cout << root->val << endl;
        //p.pop();
        //p.push(root->left);
        //p.push(root->right);
        
        while(!p.empty()){            
            
            Node* rightNode = nullptr;   
            for(int i = size(p); i; i--) {
                Node* cur= p.front(); p.pop();
                cur->next=rightNode;
                rightNode=cur;
                cout << cur->val << endl;
                if(cur->right){
                p.push(cur->right);
                p.push(cur->left);
            }   
            }
            
                        
            
        }
        
        return root;
        
    }
};