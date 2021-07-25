/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow=head,*fast=head;
        int flag=0;
        unordered_map<ListNode*,int> res;
        while(slow and fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            ListNode *temp = head;
            while(temp){
                if(res[temp]==0){
                    res[temp]++;
                }
                else return temp;
                temp=temp->next;
            }
        }
        return NULL;
    }
};