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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *n1 =head,*n2 =head;
        int size=0;
        while(n1){size++;n1=n1->next;}
        if(size==1){return NULL;}
        if(size==n){head=head->next; return head;}
        while(--size-n)n2=n2->next;
        n2->next=n2->next->next;
        return head;
    }
};