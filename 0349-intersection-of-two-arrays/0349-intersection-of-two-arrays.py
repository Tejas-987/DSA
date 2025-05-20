class Solution(object):
    def intersection(self, nums1, nums2):
        num11=set(nums1)
        num22=set(nums2)
        inter=num11 & num22
        return inter
        