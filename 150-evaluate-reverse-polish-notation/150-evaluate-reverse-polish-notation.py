class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        z = []
        for i in tokens:
            if i in ['+','-','*','/']:
                a1 = int(z.pop())
                a2 = int(z.pop())
                if i == '+' : z.append(a1+a2)
                if i == '-' : z.append(a2-a1)
                if i == '*' : z.append(a1*a2)
                if i == '/' : z.append(int(a2/a1))
                #print(z)
            else:
                z+=[i]
        return z[0]
        