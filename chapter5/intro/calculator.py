from cs50 import get_int

# Get two ints from the user
x = get_int("x: ")
y = get_int("y: ")

# Add
print(f"x plus y is {x + y}")

# Division (note* int / int will be a double!)
print(f"x divided by y is {x / y:.2f}")

# Floor division
print(f"x floor divided by y is {x // y}")
