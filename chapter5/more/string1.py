# Program that loops through each character in a string
# and prints it as a capital
from cs50 import get_string

before = get_string("Before: ")
print("After: ", end="")

for c in before:
    print(c.upper(), end="")
print()
