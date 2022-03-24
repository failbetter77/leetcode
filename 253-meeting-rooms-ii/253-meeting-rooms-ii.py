class Solution:
    def minMeetingRooms(self, intervals: List[List[int]]) -> int:
        
        #1. invervals가 비었는지 검사한다. 
        if not intervals:
            return 0
        
        #2. intervals를 시작시간을 기준으로 정렬한다. 
        # 시작시간 기준으로 되어있으므로, 
        # 나중에 들어오는건 앞선 시작시간보다 뒤 임이 보장된다. 
        # 따라서 시작한 회의의 종료시간과 새로운 회의의 시작시간의 순서를 비교하면된다. 
        intervals.sort(key= lambda x : x[0])
        
        #3. heapq에 제일 먼저 시작하는 회의의 종료시간을 넣는다. 
        free_rooms = []
        heapq.heappush(free_rooms, intervals[0][1])
        
        for new_meeting in intervals[1:]:
            #새로운 미팅의 시작시간이 가장 빨리 끝나는 룸의 종료시간(free_rooms엔 종료시간이 들어감)보다 뒤라면
            #이제 그 룸은 체킹 안해도되서 빼낸다. 
            if new_meeting[0] >= free_rooms[0]:
                heapq.heappop(free_rooms)
            
            heapq.heappush(free_rooms,new_meeting[1])
            
        
        return len(free_rooms)
            
                
            
            
        