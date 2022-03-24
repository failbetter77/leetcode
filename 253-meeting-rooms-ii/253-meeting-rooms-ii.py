class Solution:
    def minMeetingRooms(self, intervals: List[List[int]]) -> int:
        # 1. is intervals empty? 
        if not intervals:
            return 0
        
        #무작위로 기입된 invervals를 회의 시작시간을 기준으로하여 정렬한다. 
        intervals.sort(key= lambda x: x[0])
        
        free_rooms = []
        
        heapq.heappush(free_rooms, intervals[0][1])
        
        for new_meeting in intervals[1:]:
            # 새로운 미팅의 시작 시간이, 이전에 진행중이던 회의의 종료시간보다 
            # 뒤 일경우, 겹치지 않으므로, 그 회의를 제거한다.             
            if free_rooms[0] <= new_meeting[0]:
                heapq.heappop(free_rooms)
            
            # 이전에 진행중이던 회의의 종료시간전에 신규 회의가 시작 될경우 
            # 새로운 회의의 종료 시간(new_metting[1] 을 heapq에 넣는다. 
            # 시작시간은 heaqp에 이전에 넣었던 회의의 종료시간과 비교하여 고려된다. 
            # heapq의 deapth 자체가 필요한 회의룸의 개수가 된다.             
            heapq.heappush(free_rooms, new_meeting[1])
            
        return len(free_rooms)
            
        
        