class Solution:
    def __init__(self):
        self.memo = {}
    def solve(self, x: int):
        if (x <= 1) : 
            return 1

        if x in self.memo : 
            return self.memo[x]

        self.memo[x] = self.solve(x - 1) + self.solve(x - 2)
        return self.memo[x]

    def climbStairs(self, n: int) -> int:
        return self.solve(n)