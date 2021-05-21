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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *n1 = head;
        while(n1 and n1->next)
        {
            if(n1->val==n1->next->val)
                n1->next=n1->next->next;
            else
            n1=n1->next;
            
        }
        return head;
            
        
    }
};