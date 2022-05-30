class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        dict1 = defaultdict(list)
        for i in strs: dict1[''.join(sorted([x for x in i]))].append(i)    
        return dict1.values()
        
        