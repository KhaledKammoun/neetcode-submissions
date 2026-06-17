class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        store = dict({0 : 0, 1 : 0})
        def solve(x) : 
            if  x == 0 or x == 1 :
                return 0
            if x in store :
                return store[x]
            store[x] = min(solve(x - 1) + cost[x - 1], solve(x - 2) + cost[x - 2])
            return store[x]
        
        return solve(len(cost))