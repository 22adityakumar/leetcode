from functools import cmp_to_key

class Solution:
    def largestNumber(self, nums: List[int]) -> str:
        array = list(map(str, nums))

        def compare(a, b):
            if a + b > b + a:
                return -1
            elif a + b < b + a:
                return 1
            return 0

        array.sort(key=cmp_to_key(compare))

        if array[0] == "0":
            return "0"

        return ''.join(array)