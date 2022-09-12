class Solution:
    def minGroups(self, intervals: List[List[int]]) -> int:
        intervals.sort(key = lambda x:(x[0],x[1]))
        
        pq = []
        heapq.heappush(pq,intervals[0][1]) ## push end time 
        for s, e in intervals[1:]:
            if s > pq[0]:
                heapq.heappop(pq)            
            heapq.heappush(pq,e)
        return len(pq)
            
                
            