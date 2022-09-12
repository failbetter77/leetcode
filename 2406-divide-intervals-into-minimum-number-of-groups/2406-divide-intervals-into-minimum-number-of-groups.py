class Solution:
    def minGroups(self, intervals: List[List[int]]) -> int:
        intervals.sort(key = lambda x:(x[0],x[1]))
        
        pq = []
        heapq.heappush(pq,intervals[0][1]) ## push end time 
        ret = 1
        retm=0
        for s, e in intervals[1:]:
            if s > pq[0]:
                heapq.heappop(pq)
                ret-=1
            else :                
                ret+=1
            heapq.heappush(pq,e)
        return len(pq)
            
                
            