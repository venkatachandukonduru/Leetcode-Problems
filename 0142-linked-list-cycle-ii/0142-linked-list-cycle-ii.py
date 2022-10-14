# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        slowptr,fastptr = head,head
        flag = 0
        while fastptr and fastptr.next:
            slowptr = slowptr.next
            fastptr = fastptr.next.next
            if slowptr == fastptr:
                slowptr = head
                while slowptr != fastptr:
                    slowptr = slowptr.next
                    fastptr = fastptr.next
                return slowptr
        
        return 
    
        # Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None
'''
class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        slowptr,fastptr = head,head
        flag = 0
        while fastptr and fastptr.next:
            slowptr = slowptr.next
            fastptr = fastptr.next.next
            if flag == 1 and slowptr == fastptr :
                return slowptr
            
            if slowptr == fastptr and flag == 0:
                flag = 1
                slowptr = head
        
        return False
        '''