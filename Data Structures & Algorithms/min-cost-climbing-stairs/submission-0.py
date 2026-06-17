class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        def solve(x) : 
            if  x == 0 or x == 1 :
                return 0

            return min(solve(x - 1) + cost[x - 1], solve(x - 2) + cost[x - 2])
        
        return solve(len(cost))