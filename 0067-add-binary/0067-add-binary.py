class Solution(object):
    def addBinary(self, a, b):
        a=int(a,2)
        b=int(b,2)
        ans=format(a+b,'b')
        return ans
        