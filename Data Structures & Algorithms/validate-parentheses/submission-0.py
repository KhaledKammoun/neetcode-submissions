class Solution:
    def isValid(self, s: str) -> bool:
        openList = ['(', '{', '[']
        stack = []
        for c in s : 
            if len(stack) > 0 and stack[-1] == c and c not in openList and stack[-1] in openList :
                openList = openList[:-2]
            else :
                openList.append(c)
        
        return len(stack) == 0