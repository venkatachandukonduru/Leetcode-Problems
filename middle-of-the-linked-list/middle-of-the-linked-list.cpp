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
      ListNode *n1=head,*n2=head;
        int size=0;
        while(n1)
        {
            size++;
            n1=n1->next;
        }
        size=ceil(size/2);
        while(size--)n2=n2->next;
        return n2;
        
    }
};