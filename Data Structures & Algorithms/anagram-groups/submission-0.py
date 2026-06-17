class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagramDict = {}
        for c in strs:
            sortedC = ''.join(sorted(c)) 
            if sortedC not in anagramDict : 
                anagramDict[sortedC] = [c]
            else : 
                anagramDict[sortedC].append(c)

        return list(anagramDict.values())