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
    bool isPalindrome(ListNode* head) {
        vector<int> v1;
        while(head)
        {
            v1.push_back(head->val);
            head = head->next;
        }
        int n= v1.size();
        for(auto i:v1)cout<<i<<" ";
        for(int i=0;i<n/2;i++)
        {
            if(v1[i]!=v1[n-i-1])return false;
        }
        return true;
    }
};