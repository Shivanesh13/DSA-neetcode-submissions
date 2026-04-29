class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:

        umap = defaultdict(int)

        for data in nums: 
            umap[data] += 1

        size = 0
        ret = 0
        for key, items in umap.items():
            size = 1
            print(f"key : {key} items : {items}")
            while (key + 1) in umap:
                size += 1
                key += 1
            if ret < size: 
                ret = size
        
        return ret

        