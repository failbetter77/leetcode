class Solution:
    def numWays(self, s: str) -> int:
        one_cnt = s.count('1')
        
        if one_cnt % 3 != 0:
            return 0
        
        if one_cnt == 0:
            return (len(s) - 1) * (len(s) - 2) // 2 % (10 ** 9 + 7)
        
        one = cnt1 = cnt2 = 0
        for c in s:
            if c == '1':
                one += 1
            if one == one_cnt / 3:
                cnt1 += 1
            if one == one_cnt * 2 / 3:
                cnt2 += 1
        return cnt1 * cnt2 % (10 ** 9 + 7)
    
        