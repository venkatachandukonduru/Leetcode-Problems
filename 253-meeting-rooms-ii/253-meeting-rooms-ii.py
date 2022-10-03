class Solution:
    def minMeetingRooms(self, intervals: List[List[int]]) -> int:
        intervals.sort()
        res = [intervals[0]]
        
        for p in intervals[1:]:
            i,flag = 0,0
            while i<len(res):
                if p[0]>=res[i][1]:
                    res[i] = p
                    flag = 1
                    break
                i+=1
        
            if not flag:
                res.append(p)
        print(res)
        return len(res)