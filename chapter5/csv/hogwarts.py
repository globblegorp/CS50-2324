# Count the students in each house
import csv

# Dictionary to count the houses
houses = {
    "Gryffindor": 0,
    "Hufflepuff": 0,
    "Slytherin": 0,
    "Ravenclaw": 0
}

# Open the csv
with open("hogwarts.csv", "r") as house_list:
    # Read the rows and save a a variable called reader
    reader = csv.reader(house_list)

    # Skip over the title row
    next(reader)

    for row in reader:
        house = row[1]
        houses[house] += 1

print(houses)
