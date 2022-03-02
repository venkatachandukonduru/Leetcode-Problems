"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def levelOrder(self, root: 'Node') -> List[List[int]]:
        temp,res = [root],[]
        while any(temp):
            res.append([x.val for x in temp])
            temp = [child for node in temp for child in node.children if child]
        return res
        
        
        
        
        '''
        nodes = [root,'a']
        if root : res = [root.val,'a']
        else : return []
        temp2 = []
        while len(nodes):
            temp1 = nodes.pop(0)
            if temp1 and temp1.children :
                    nodes+=temp1.children
                    for i in temp1.children : res.append(i.val)
            if nodes[0]=='a':
                nodes.pop(0)
                if len(nodes):
                    nodes.append('a')
                    res.append('a')
        print(res)
        result = []
        temp = []
        for i in res:
            if i != 'a': temp.append(i)
            else : 
                result.append(temp)
                temp = []
        return result
        '''
            
                
        