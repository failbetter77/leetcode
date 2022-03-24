from collections import deque

class Solution:
    def minMeetingRooms(self, intervals: List[List[int]]) -> int:
        starts, ends = map(deque, map(sorted, zip(*intervals)))
        
        count = 0
        max_conf = 0
        for start in starts:
            count += 1
            while ends[0] <= start:
                count -= 1
                ends.popleft()
            max_conf = max(max_conf, count)

        return max_conf
        
        