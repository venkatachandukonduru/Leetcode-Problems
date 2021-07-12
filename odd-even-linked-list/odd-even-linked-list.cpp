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
    ListNode* oddEvenList(ListNode* head){
        if(!head)return NULL;
        ListNode *n1 = head;
        ListNode *n2 = head->next;
        ListNode *n3 = head->next;
        while(n1->next and n2->next)
        {
            n1->next = n2->next;
            n1=n2->next;
            n2->next = n1->next;
            n2=n1->next;
        }
        n1->next=n3;
        return head;
    }
};
/*
ListNode* oddEvenList(ListNode* head) {
        ListNode *n1 = head;
        ListNode *n2 = head;
        vector<int> v1;
        while(n1)
        {
            v1.push_back(n1->val);
            n1 = n1->next;
        }
        int i=0;
        while(i<v1.size())
        {
            n2->val = v1[i];
            i+=2;
            n2=n2->next;
        }
        i=1;
        while(i<v1.size())
        {
            n2->val = v1[i];
            i+=2;
            n2=n2->next;
        }
        return head;
        
    }
*/