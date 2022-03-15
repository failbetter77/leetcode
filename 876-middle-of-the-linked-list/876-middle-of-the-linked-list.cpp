/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int cnt=0;
        vector<ListNode*> temp;
        ListNode* p=head;
        
        while(p != NULL)
        {   
            temp.push_back(p);
            p=p->next;
            //cout << p->val << endl;            
            cnt++;
        }
        return temp[cnt/2];
    }
};