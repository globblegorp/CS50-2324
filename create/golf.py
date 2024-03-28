from cs50 import get_int, get_string
from statistics import mean

def main():
    # Prompt user for input about each hole they played.
    holes = []

    while True:
        hole_number = get_int("Golf course hole number: ")
        handicap = get_int("Hole handicap rating: ")
        while True:
            par = get_int("Hole par: ")
            if par > 2 and par < 6:
                break
        score = get_int("Your score: ")
        holes.append({"hole number": hole_number,
                        "handicap": handicap,
                        "par": par,
                        "score": score})
        print()

        # Determine if user is done inputting hole information
        while True:
            more = get_string("Would you like to input information for another golf hole? ").lower()
            if more in ["no", "n", "yes", "y"]:
                break
        print()
        if "n" in more:
            break

    # Compared to par
    print_par(holes)

    # Easiest and hardest holes of the day
    print_dificulty(holes)

    # Average score on par 3s, par 4s, and par 5s
    print_averages(holes)

    # Percentages
    print_percentages(holes)

def print_par(holes):
    """Prints the user's distance from par for the day"""
    total_par = 0
    total_score = 0
    for row in holes:
        total_par += row["par"]
        total_score += row["score"]
    if total_score < total_par:
        print(f"You were {total_par - total_score} under par though {len(holes)} holes.")
    elif total_score > total_par:
        print(f"You were {total_score - total_par} under par though {len(holes)} holes.")
    else:
        print(f"You were even par through {len(holes)} holes.")

def print_dificulty(holes):
    """Prints the easiest and most dificult hole of the day"""
    easiest = 0
    hardest = 19
    for row in holes:
        if row["handicap"] > easiest:
            easiest = row["hole number"]
        if row["handicap"] < hardest:
            hardest = row["hole number"]
    print(f"Hole {easiest} was the easiest hole you played and hole {hardest} was the hardest hole you played.")

def print_averages(holes):
    """Prints the average score on a par 3, 4, and 5"""
    par3 = []
    par4 = []
    par5 = []
    for row in holes:
        if row["par"] == 3:
            par3.append(row["score"])
        elif row["par"] == 4:
            par4.append(row["score"])
        elif row["par"] == 5:
            par5.append(row["score"])
    if not par3:
        print("You did not play any par 3s.")
    else:
        print(f"Your average score on a par 3 was {mean(par3)}.")

    if not par4:
        print("You did not play any par 4s.")
    else:
        print(f"Your average score on a par 4 was {mean(par4)}.")

    if not par5:
        print("You did not play any par 5s.")
    else:
        print(f"Your average score on a par 5 was {mean(par5)}.")

def print_percentages(holes):
    """Prints the percentace of scores"""
    scores = {
        "birdies": 0,
        "pars": 0,
        "bogies": 0,
        "double bogies": 0,
        "triple bogies": 0
    }

    for row in holes:
        offset = row["par"] - row["score"]

        if offset >= 1:
            scores["birdies"] += 1
        elif offset == 0:
            scores["pars"] += 1
        elif offset == -1:
            scores["bogies"] += 1
        elif offset == -2:
            scores["double bogies"] += 1
        else:
            scores["triple bogies"] += 1

    print("Percentages:")
    score = scores["birdies"]
    print(f"\tBirdy or better: {int(score / len(holes) * 100)}%")
    score = scores["pars"]
    print(f"\tPar: {int(score / len(holes) * 100)}%")
    score = scores["bogies"]
    print(f"\tBogey: {int(score / len(holes) * 100)}%")
    score = scores["double bogies"]
    print(f"\tDouble Bogey: {int(score / len(holes) * 100)}%")
    score = scores["triple bogies"]
    print(f"\tTriple Bogey or Higher: {int(score / len(holes) * 100)}%")

main()

