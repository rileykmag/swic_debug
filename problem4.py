# Program: Print first n Fibonacci numbers
n = 6
a, b = 0, 1
for i in range(n):
    print(a, end=" ")
    a = b
    b = a + b
