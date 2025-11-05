class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        mp ={}
        for i, v in enumerate(nums):
            need = target - v
            if need in mp:
                return [mp[need],i]
            mp[v] = i
        return []

        