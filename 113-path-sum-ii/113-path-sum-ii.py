# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def pathSum(self, root: Optional[TreeNode], targetSum: int) -> List[List[int]]:
        self.res = []
        def traversal(root,temp,target,list1):
            if root is None:
                return
            temp+=root.val
            if not root.left and not root.right and temp == target:
                list1.append(root.val)
                self.res.append(list1)
            traversal(root.left,temp,target,list1+[root.val])
            traversal(root.right,temp,target,list1+[root.val])
        
        traversal(root,0,targetSum,[])
        return self.res
                
        