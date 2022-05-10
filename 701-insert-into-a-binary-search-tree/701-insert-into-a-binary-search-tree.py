# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def insertIntoBST(self, temp: Optional[TreeNode], val: int) -> Optional[TreeNode]:
        if not temp:
            return TreeNode(val)
        root = temp
        def insert(root,val):
            if root is None:
                return
            if root.left is None and val<root.val:
                root.left = TreeNode(val)
            if root.right is None and val>root.val:
                root.right = TreeNode(val)
            if val<root.val:
                insert(root.left,val)
            else:
                insert(root.right,val)
        insert(root,val)
        return temp
        