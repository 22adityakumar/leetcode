from typing import List

class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        nums = list(set(nums))   # remove duplicates
        nums.sort(reverse=True)  # sort descending
        
        if len(nums) >= 3:
            return nums[2]
        else:
            return nums[0]