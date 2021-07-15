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
    ListNode *temp;
    void remove(ListNode* root,int val)
    {
        if(!(root and root->next))return;
        if(root->next->val==val)
        {
            temp=root->next;
            while(temp and temp->val==val)temp=temp->next;
            root->next=temp;
        }
        remove(root->next,val);
    }
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)return NULL;
        while(head and head->val==val)head=head->next;
        remove(head,val);
        return head;
    }
};