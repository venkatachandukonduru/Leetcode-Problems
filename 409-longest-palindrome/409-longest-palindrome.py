class Solution:
    def longestPalindrome(self, s: str) -> int:
        j = Counter(s)
        flag = count = 0
        for p in j:
            if j[p]%2!=0: flag = 1
            count += j[p] if j[p]%2==0 else j[p]-1
            print(count)
        return count+flag if count%2 == 0 else count