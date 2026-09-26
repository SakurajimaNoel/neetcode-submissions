class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mdict = {}
        for idx, n in enumerate(nums):
            if (target-n) in mdict:
                return [mdict[target-n],idx]
            else:
                mdict[n] = idx