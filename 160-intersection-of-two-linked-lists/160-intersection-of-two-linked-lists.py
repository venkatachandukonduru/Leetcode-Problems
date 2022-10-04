# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, a: ListNode, b: ListNode) -> Optional[ListNode]:
        p1,p2 = a,b
        
        while p1 or p2:
            
            if not p1:
                p1 = b
            
            if not p2:
                p2 = a
                
            if p1 == p2:
                return p1
            
            p1 = p1.next
            p2 = p2.next