class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        z = head
        while head and head.next:
            while head and head.next and head.val == head.next.val : head.next = head.next.next
            head =  head.next
        return z