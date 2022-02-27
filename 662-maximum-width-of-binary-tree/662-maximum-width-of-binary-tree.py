# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def widthOfBinaryTree(self, root):
        width = 0
        level = [(1, root)]
        while level:
            width = max(width, level[-1][0] - level[0][0] + 1)
            level = [kid
                     for number, node in level
                     for kid in enumerate((node.left, node.right), 2 * number)
                     if kid[1]]
        return width
    '''
    def widthOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        if not root : return 0
        temp = [root,'a']
        count = 0
        while len(temp)!=1:
            cnt1 = 0
            while temp[0]!='a':
                z = temp.pop(0);
                cnt1+=1
                if z : 
                    if z.left or z.right : temp+=[z.left,z.right]
            count = max(count,cnt1)
            #print(count)
            #print(temp)
            temp.pop(0)
            temp.append('a')
        return count
        '''
                
            
        