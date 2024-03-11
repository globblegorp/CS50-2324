import csv
import sys


def main():

    # TODO: Check for command-line usage

    # Read database file into a variable (argv[1])
    people = []
    with open(sys.argv[1]) as db_file:
        reader = csv.DictReader(db_file)

        # Save the STRs to a variable
        strs = reader.fieldnames[1:]
        print(strs)

        # Put each row of dictionary into the variable people
        for row in reader:
            people.append(row)
    print(people)

    # Read DNA sequence file into a variable (argv[2])
    with open(sys.argv[2]) as dna_file:
        sequence = dna_file.read()
    print(sequence)

    # Find longest match of each STR in DNA sequence
    matches = {}
    for str in strs:
        matches[str] = longest_match(sequence, str)
    print(matches)

    # TODO: Check database for matching profiles
    # For each person in people
        # Assume we found the person until we find a mismatch
        # For str in strs
            # Check if a match
            # If not a match, break
        # If we don't break, then we found a match
    # Otherwise, not found


    return


def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequence in sequence."""

    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        # If a match, move substring to next potential match in sequence
        # Continue moving substring and checking for matches until out of consecutive matches
        while True:

            # Adjust substring start and end
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if sequence[start:end] == subsequence:
                count += 1

            # If there is no match in the substring
            else:
                break

        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in seqeuence, return longest run found
    return longest_run


main()
