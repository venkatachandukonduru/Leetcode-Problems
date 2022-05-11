# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def insertIntoBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:
        #Iterative
        curr = prev = root
        node = TreeNode(val)
        while curr:
            prev = curr
            curr = curr.left if val < curr.val else curr.right
        if prev:
            if val<prev.val : prev.left = node
            else: prev.right = node
        return root if root else node
        
        '''
        #Short Recursive
        if not root : return TreeNode(val)
        if val<root.val : root.left = self.insertIntoBST(root.left,val)
        else: root.right = self.insertIntoBST(root.right,val)
        return root
        '''
    
    
    
        '''
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
        '''