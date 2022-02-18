# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        z = head
        temp1 = defaultdict(int)
        while z:
            temp1[z.val]+=1
            z = z.next
        curr = ListNode()
        u,z = curr,head
        while z :
            if temp1[z.val]>1 : z = z.next
            else:
                curr.next = ListNode(z.val)
                curr = curr.next
                z = z.next
        return u.next
        
            
        '''
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
        '''