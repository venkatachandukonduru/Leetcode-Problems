class Solution:
    def removeKdigits(self, num: str, k: int) -> str:
        stack = [num[0]]
        #if len(num)==k: return "0"
        for i in num[1:]:
            while len(stack) and stack[-1]>i and k:
                stack.pop()
                k-=1
            stack.append(i)
        for _ in range(k): stack.pop()
        return "".join(stack).lstrip("0") or '0'
                
            