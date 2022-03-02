# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class BSTIterator:
    def __init__(self, root):
        self.res = self.solve(root)
        self.i = 0
    def inorder(self,root,res):
        if not root: return
        self.inorder(root.left,res)
        res.append(root)
        self.inorder(root.right,res)

    def solve(self, root):
        res = []
        self.inorder(root,res)
        return res

    def next(self):
        self.i+=1
        return self.res[self.i-1].val

    def hasNext(self):
        if self.i<len(self.res): return True
        return False
        
        


# Your BSTIterator object will be instantiated and called as such:
# obj = BSTIterator(root)
# param_1 = obj.next()
# param_2 = obj.hasNext()