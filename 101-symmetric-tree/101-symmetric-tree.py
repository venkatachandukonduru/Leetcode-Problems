# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        res,temp = [],[root]
        while any(temp):
            res = [x.val if x else 'a' for x in temp]
            if res!=res[::-1] : return False
            temp = list(chain.from_iterable([node.left,node.right] for node in temp if node))
        return True
            
        
    '''
        print(res)
        for i in res:
            for j in range((len(i)//2) +1):
                if i[j]!=i[-1*(j+1)]:return False
        return True
        
        if res != res.reverse() : return False
        return True
        '''