class Solution:
    def partitionString(self, s: str) -> int:
        sub_set, ans = set(), 1
        for c in s:
            if c in sub_set:
                sub_set={c}
                ans+=1
            else:
                sub_set.add(c)
        return ans
                