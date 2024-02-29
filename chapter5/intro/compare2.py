from cs50 import get_string

s = get_string("Do you agree? (y/n) ")

if s == "Y" or s == "y":
    print("yes")
elif s == "N" or s == "n":
    print("no")
