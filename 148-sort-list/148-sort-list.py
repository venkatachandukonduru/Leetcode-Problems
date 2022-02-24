# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def sortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        n1 = head
        res = []
        while n1 : 
            res.append(n1.val)
            n1 = n1.next
        
        n2 = head
        res.sort()
        for i in res:
            n2.val = i
            n2 = n2.next
        return head