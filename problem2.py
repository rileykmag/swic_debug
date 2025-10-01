# Program: Find the max in a list
def find_max(nums):
    max_val = nums[0]
    for n in nums:
        if n > max_val:
            max_val = n
    return "Max value:", max_val

print(find_max([1,2,3,4,5]))
print(find_max([]))
print(find_max([3,2,8,4,6]))
