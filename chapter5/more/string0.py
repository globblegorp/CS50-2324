# Program that loops through each character in a string
# and prints it as a capital
before = input("Before: ")
print("After: ", end="")

for c in before:
    print(c.upper(), end="")
print()
