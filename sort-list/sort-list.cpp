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
    //ListNode* merge(ListNode* left, ListNode* right);
    ListNode* sortList(ListNode* head) {
        if(!head or !head->next)return head;
        ListNode *temp=head,*slow=head,*fast=head;
        while(fast and fast->next){
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        temp->next = NULL;
        ListNode *left = sortList(head);
        ListNode *right = sortList(slow);
        return merge(left,right);
        
    }
    ListNode* merge(ListNode* left, ListNode* right){
        ListNode *temp1 = new ListNode(INT_MIN);
        ListNode *curr = temp1;
        while(left and right){
            if(left->val<right->val){
                curr->next = left;
                left = left->next;
            }
            else{
                curr->next = right;
                right = right->next;
            }
            curr=curr->next;
        }
        while(left){
            curr->next = left;
            left=left->next;
            curr = curr->next;
        }
        while(right){
            curr->next = right;
            right=right->next;
            curr = curr->next;
        }
        return temp1->next;
    }
};