class Solution:
    def rob(self, nums: List[int]) -> int:
        memo = {}
        def solve(index) : 
            if index <= -1 :
                return 0
            
            if index in memo : 
                return memo[index]
                
            memo[index] = max(nums[index] + solve(index - 2), solve(index - 1))
            return memo[index]

        
        return solve(len(nums) - 1)