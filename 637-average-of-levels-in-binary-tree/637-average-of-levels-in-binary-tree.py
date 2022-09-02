# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def averageOfLevels(self, root: Optional[TreeNode]) -> List[float]:
        temp,res = [root],[]
        while any(temp):
            res.append(mean([node.val for node in temp]))
            temp = [j for i in temp for j in [i.left,i.right] if j]
        return res