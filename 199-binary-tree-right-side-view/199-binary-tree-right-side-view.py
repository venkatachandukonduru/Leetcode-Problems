# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        #Using BFS
        res = []
        temp = [root]
        while any(temp):
            res.append(temp[-1].val)
            temp = [ child for node in temp for child in [node.left,node.right] if child]
        return res