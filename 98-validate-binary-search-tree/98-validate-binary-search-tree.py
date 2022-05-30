# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        res = []
        def traversal(root,res):
            if not root:
                return
            traversal(root.left,res)
            res.append(root.val)
            traversal(root.right,res)
            if len(res)!=len(set(res)): return False
            if res!=sorted(res) : return False
            else : return True
        return traversal(root,res)
        