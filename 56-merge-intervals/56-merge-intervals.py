class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort()
        i = 1
        while i<len(intervals):
            if intervals[i-1][1]>=intervals[i][0] :
                intervals[i-1][1] = max(intervals[i-1][1],intervals[i][1])
                intervals = intervals[:i]+ intervals[i+1 : ]
            else: i+=1
        return intervals
        
        
        # #Using new Array
        # res = [intervals[0]]
        # for i in intervals[1:]:
        #     if res[-1][1]>=i[0] :
        #         res[-1][1] = max(res[-1][1],i[1])
        #     else:
        #         res.append(i)
        # return res