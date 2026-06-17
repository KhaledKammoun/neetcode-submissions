class Solution:
    def solve(self, x: int):
        if (x <= 1) : 
            return 1
        return self.solve(x - 1) + self.solve(x - 2)
    def climbStairs(self, n: int) -> int:
        return self.solve(n)