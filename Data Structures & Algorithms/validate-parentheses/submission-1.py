class Solution:
    def isValid(self, s: str) -> bool:
        openList = ['(', '{', '[']
        closedList = [')', '}', ']']

        stack = []
        for c in s:
            if c in openList:  
                stack.append(c)
            else:
                if not stack:
                    return False
                if openList.index(stack[-1]) == closedList.index(c):
                    stack.pop()
                else:
                    return False
        
        return len(stack) == 0
