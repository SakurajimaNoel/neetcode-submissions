class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        col = Counter(nums)
        return [ans for ans,_ in col.most_common(k)]