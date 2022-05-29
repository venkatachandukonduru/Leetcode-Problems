# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        res = []
        self.count = 0
        def traversal(root,res):
            if not root:
                return
            if len(res)==0: self.count+=1
            else:
                if root.val>=max(res): self.count+=1
            traversal(root.left,res+[root.val])
            traversal(root.right,res+[root.val])
        traversal(root,res)
        return self.count
        
        