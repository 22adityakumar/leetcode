class Solution:
    def maxDepthAfterSplit(self, seq: str) -> list[int]:
        n = len(seq)
        result =[0] * n
        d =0
        for i in range(n):
            if seq[i] == '(':
                d += 1
                if d % 2 == 0:
                    result[i] = 0
                else:
                    result[i] = 1
            else:
                if d % 2 == 0:
                    result[i] = 0
                else:
                    result[i] = 1
                d -= 1
        return result