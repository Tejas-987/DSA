class Solution(object):
    def removeDuplicates(self, nums):
        if not nums:
            return 0
        
        # Initialize a pointer to keep track of the position where the next unique element should be placed
        next_unique = 1
        
        # Iterate over the list starting from the second element
        for i in range(1, len(nums)):
            # If the current element is different from the previous element, 
            # copy it to the position of the next unique element
            if nums[i] != nums[i - 1]:
                nums[next_unique] = nums[i]
                next_unique += 1
        
        return next_unique
