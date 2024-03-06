import csv
from cs50 import get_string

# Open phonebook.csv in "a"ppend mode
file = open("phonebook.csv", "a")

# Get number from the user
name = get_string("Name: ")
number = get_string("Number: ")

# Write the name and number for the file
writer = csv.writer(file)
writer.writerow([name, number])

# Close the open file
file.close()
