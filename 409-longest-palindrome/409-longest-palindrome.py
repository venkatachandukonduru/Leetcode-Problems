class Solution:
    def longestPalindrome(self, s: str) -> int:
        count = flag = 0
        for h,k in Counter(s).items() :
            if k%2 != 0 : flag = 1
            count+=k if k%2==0 else k-1
        return count+flag
        '''
        j = Counter(s)
        #for h,k in Counter(s).items(): print(h,k)
        flag = count = 0
        for p in j:
            if j[p]%2!=0: flag = 1
            count += j[p] if j[p]%2==0 else j[p]-1
        return count+flag if count%2 == 0 else count
        '''