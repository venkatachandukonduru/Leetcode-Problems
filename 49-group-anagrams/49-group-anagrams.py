class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        d1 = {}
        for i in strs : d1[tuple(sorted(i))] = d1.get(tuple(sorted(i)),[])+[i]
        return d1.values()
        '''
        dict1 = defaultdict(list)
        for i in strs: dict1[''.join(sorted([x for x in i]))].append(i)    
        return dict1.values()
        '''
        
        