class Solution:
    def frequencySort(self, s: str) -> str:
        z = sorted(Counter(s).items(), key = lambda x : x[1], reverse = True)
        res = ""
        for i in z: res+=i[0]*i[1]
        return res