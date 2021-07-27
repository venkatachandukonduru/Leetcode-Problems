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
    ListNode* middlenode(ListNode* head){
        ListNode *slow = head, *fast = head;
        ListNode *temp=NULL;
        while(slow and fast and fast->next){
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* head){
        if(head==NULL||head->next==NULL)return head;
        ListNode *pre = NULL,*curr=NULL;
        while(head){
            curr = head;
            ListNode* temp = curr->next;
            curr->next = pre;
            pre=curr;
            head=temp;
        }
        return curr;
    }
    void reorderList(ListNode* head) {
        ListNode* middle = middlenode(head);
        ListNode *curr = middle->next;
        curr = reverse(curr);
        middle->next = NULL;
        ListNode* temp = head;
        while(temp and curr){
            ListNode* link1 = curr;
            curr = link1->next;
            ListNode* link2 = temp->next;
            temp->next = link1;
            link1->next = link2;
            temp = link2;
        }
        //return head;
    }
};
/*
    ListNode* reverse(ListNode* head){
        if(head==NULL)return NULL;
        ListNode* temp = reverse(head->next);
        if(temp and temp->next){
            temp->next = head;
            if(temp->next->next==NULL)
            tail = temp;
        }
        return tail;
    }
    */