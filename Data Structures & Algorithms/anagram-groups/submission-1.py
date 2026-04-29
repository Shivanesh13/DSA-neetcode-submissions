class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        umap = defaultdict(list)
        data = []
        for l in strs:
            temp = "".join(sorted(l))
            umap[temp].append(l)
        
        return list(umap.values())