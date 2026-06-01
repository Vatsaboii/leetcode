class Solution:
    def minimumCost(self, c: List[int]) -> int:
        c.sort()
        return sum(c) - sum(c[-3::-3])