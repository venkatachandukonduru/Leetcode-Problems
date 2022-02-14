# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        
        return 1+max(self.maxDepth(root.left),self.maxDepth(root.right)) if root else 0
    
        if not root:
            return 0
        res = [root,"a"]
        cnt = 1
        while len(res)!=0:
            temp = res[0]
            del res[0]
            while temp!="a":
                if temp.left : res.append(temp.left)
                if temp.right : res.append(temp.right)
                temp = res[0]
                del res[0]
            if temp=="a":
                if len(res)<1:
                    return cnt
                cnt+=1
                res.append("a")