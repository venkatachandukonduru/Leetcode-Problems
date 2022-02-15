# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head or not head.next:
            return head
        z = head
        while head and head.next :
            temp1,temp2 = head,head.next
            temp1.val,temp2.val = temp2.val,temp1.val
            head = head.next.next
        return z
            
        
        