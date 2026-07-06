class Solution:
    def rob(self, nums: List[int]) -> int:
        def solve(index) : 
            if index <= -1 :
                return 0
            

            return max(nums[index] + solve(index - 2), solve(index - 1))

        
        return solve(len(nums) - 1)