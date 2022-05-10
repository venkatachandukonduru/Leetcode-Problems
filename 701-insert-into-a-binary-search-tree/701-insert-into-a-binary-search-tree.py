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
            if val<root.val:
                if root.left is None:
                    root.left = TreeNode(val)
                    return
                insert(root.left,val)
            else:
                if root.right is None:
                    root.right = TreeNode(val)
                    return
                insert(root.right,val)
        insert(root,val)
        return temp
        