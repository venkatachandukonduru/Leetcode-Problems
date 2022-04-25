# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def binaryTreePaths(self, root) -> List[str]:
        self.res = []
        def traversal(self,root,list1):
            if root is None:
                return 
            if not root.left and not root.right:
                list1+=str(root.val)
                self.res.append(list1)
            return traversal(self,root.left,list1+str(root.val)+"->") or traversal(self,root.right,list1+str(root.val)+"->")
        traversal(self,root,"")
        return self.res
            
        
        