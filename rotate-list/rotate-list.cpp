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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)return NULL;
        ListNode *n1=head,*n2=head;
        int count =0;
        while(n2)
        {
            count++;
            n2=n2->next;
        }
        k=k%count;
        while(k--)
        {
            n1=head;
            while(n1 and n1->next and n1->next->next)
            {
                n1=n1->next;
            }
            if(n1 and n1->next)
            {
                n1->next->next=head;
                head = n1->next;
                n1->next=NULL;
            }
        }
        return head;
    }
};