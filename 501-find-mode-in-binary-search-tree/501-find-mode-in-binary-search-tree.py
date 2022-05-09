# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findMode(self, root: Optional[TreeNode]) -> List[int]:
        z = []
        def tree(root):
            if root is None:
                return
            tree(root.left)
            z.append(root.val)
            tree(root.right)
        tree(root)
        f = Counter(z).most_common()
        res = []
        res.append(f[0][0])
        for i in f[1:]:
            if i[1]!=f[0][1]:
                break
            else:
                res.append(i[0])
        return res
            
        