# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        #Using INORDER iterative method
        stack1 = []
        while root or len(stack1):
            while root:
                stack1.append(root)
                root = root.left
            root = stack1.pop()
            if k==1:
                return root.val 
            else:
                k=k-1
            root = root.right
                