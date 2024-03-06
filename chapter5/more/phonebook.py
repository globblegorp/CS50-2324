from cs50 import get_string

people = {
    "Tyler": "413-458-9582",
    "Jude": "413-555-5555",
    "John": "800-123-4567"
}

#Search for a name
name = get_string("Name: ")
if name in people:
    print(f"Number: {people[name]}")
else:
    print("Not found.")
