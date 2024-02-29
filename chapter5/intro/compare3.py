from cs50 import get_string

s = get_string("Do you agree? ")

if s in ["yes", "Yes", "y", "Y", "YES"]:
    print("yes")
elif s in ["no", "No", "N", "n", "NO"]:
    print("no")
