# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head : return head
        z = head
        dict1 = defaultdict(int)
        dict1[head.val]+=1
        while head and head.next:
            if head.val == head.next.val :
                dict1[head.next.val]+=1
                head.next = head.next.next
            head =  head.next
            if head : dict1[head.val]+=1
        print(dict1)
        p = z
        while p and p.next:
            if dict1[p.next.val]>1:
                p.next = p.next.next
            else:
                p = p.next
        if dict1[z.val]>1: z = z.next
        return z