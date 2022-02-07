class Solution:
    def rotate(self, A) -> None:
        A[:] = (zip(*A[::-1]))
        """
        Do not return anything, modify matrix in-place instead.
        """
        