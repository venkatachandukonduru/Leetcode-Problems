class Solution:
    def canAttendMeetings(self, intervals: List[List[int]]) -> bool:
        temp = []
        for i in intervals:
            if len(temp)<max(i[0],i[1]): temp.extend([0]*(i[1]-len(temp)+1))
            for j in range(i[0],i[1]):
                if temp[j]==1: return False
                else: temp[j]+=1
        return True