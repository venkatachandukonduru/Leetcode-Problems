# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        def bfs(root):
            if not root:
                return []
            res = [root]
            path = []
            while(len(res)>0):
                if not res[0]:
                    path.append('a')
                else:
                    res.append(res[0].left)
                    res.append(res[0].right)
                    path.append(res[0].val)
                res.pop(0)
            return path
        return True if bfs(p)==bfs(q) else False
            
            
        