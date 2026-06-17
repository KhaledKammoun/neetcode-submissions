class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        freq = {}
        for c in nums : 
            freq[c] = freq.get(c, 0) + 1

            if freq[c] > 1 : 
                return True
        return False
        
        