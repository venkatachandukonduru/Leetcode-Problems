# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root, target: int) -> bool:
        if not root : return False
        self.flag = 0
        def traversal(root,temp,target):
            if root is None :
                return 
            temp+=root.val
            if temp == target and not root.left and not root.right:
                self.flag = 1
            traversal(root.left,temp,target)
            traversal(root.right,temp,target)
    
        z = traversal(root,0,target)
        if self.flag==1: return True
        return False
        