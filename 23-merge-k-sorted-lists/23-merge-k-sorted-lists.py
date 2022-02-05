# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergelists(self,list1,list2):
        if a and b:
            if a.val>=b.val:
                a,b = b,a
            a.next = self.mergelists(a.next,b)
        return a or b
    def mergelists(self,list1,list2):
        curr = ListNode(None)
        dum = curr
        while list1 and list2:
            if list1.val<=list2.val :
                curr.next = list1
                list1 = list1.next
            else:
                print(list2.val,end = ' ')
                curr.next = list2
                list2 = list2.next
            curr = curr.next
        while list1:
            curr.next = list1
            list1 = list1.next
            curr = curr.next
        while list2:
            curr.next = list2
            list2 = list2.next
            curr = curr.next
        return dum.next
        
        '''if a and b:
            if a.val>=b.val:
                a,b = b,a
            a.next = self.mergelists(a.next,b)
        return a or b
        '''
    
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        if len(lists)<1:
            return None
        if len(lists)<2:
            return lists[0]
        for i in range(1,len(lists)):
            a = self.mergelists(lists[i-1],lists[i])
            lists[i]=a
        return lists[-1]
        