# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        slow,fast,prev = head,head,head
        while fast and fast.next:
            prev = slow
            slow = slow.next
            fast = fast.next.next
        if not prev : return prev
        elif not prev.next : return prev.next
        else : prev.next = prev.next.next
        return head