# Program: Count vowels in a string
word = "banana"
count = 0
for ch in word:
    if ch in "aeiou":
        count = 1
print("Vowels:", count)
