class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(0,len(nums)):
            for j in range (i,len(nums)):
                if(i!=j):
                    if(nums[i]+nums[j]==target):
                        return ([i,j])

twoSum(nums = [2,7,11,15], target = 9)   