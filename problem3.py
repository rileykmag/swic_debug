# Program: Sum only even numbers
nums = [1, 2, 3, 4, 5, 6]
total = 0
for n in nums:
    if n % 2 == 1:
        total += n
print("Sum:", total)
