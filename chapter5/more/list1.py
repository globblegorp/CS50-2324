from cs50 import get_int

scores = []

# Fill our list with scores
for i in range(3):
    score = get_int("Score: ")
    scores.append(score)

# Find and print the average
average = sum(scores) / len(scores)
print(f"Average: {average:.3f}")
