#include <cs50.h>
#include <stdio.h>

typedef struct
{
    int hole_number;
    int handicap;
    int par;
    int score;
}
hole;

// Function protoypes
void print_par(hole course[], int length);
void print_difficulty(hole course[], int length);
void print_averages(hole course[], int length);
void print_percentages(hole course[], int length);

int main(void)
{
    // Prompt user for number of holes
    int n = get_int("How many golf holes did you play today? ");
    printf("\n");
    hole course[n];

    // Prompt user for info about those holes
    for (int i = 0; i < n; i++)
    {
        course[i].hole_number = get_int("Golf course hole number: ");
        course[i].handicap = get_int("Hole handicap rating: ");
        do {
            course[i].par = get_int("Hole par: ");
        }
        while (course[i].par < 3 || course[i].par > 5);
        course[i].score = get_int("Your score: ");
        printf("\n");
    }

    // Compared to par
    print_par(course, n);

    // Easiest and hardest holes of the day
    print_difficulty(course, n);

    // Average score on par 3's par 4s, and par 5's
    print_averages(course, n);

    // Percentenges
    print_percentages(course, n);

}

// Function that prints your score compared to par
void print_par(hole course[], int length)
{
    int total_par = 0;
    int total_score = 0;
    for (int i = 0; i < length; i++)
    {
        total_par += course[i].par;
        total_score += course[i].score;
    }
    if (total_score < total_par) {
        printf("You were %i under par though %d holes.\n", total_par - total_score, length);
    }
    else
    {
        printf("You were %i over par though %d holes.\n", total_score - total_par, length);
    }
}


// Function that prints the easiest and hardest hole
void print_difficulty(hole course[], int length)
{
    int easiest_handicap = 0;
    int easiest_hole;
    int hardest_handicap = 19;
    int hardest_hole;
    for (int i = 0; i < length; i++)
    {
        if (course[i].handicap > easiest_handicap)
        {
            easiest_handicap = course[i].handicap;
            easiest_hole = course[i].hole_number;
        }

        if (course[i].handicap < hardest_handicap)
        {
            hardest_handicap = course[i].handicap;
            hardest_hole = course[i].hole_number;
        }
    }

    printf("Hole %d was the easiest hole you played and hole %d was the hardest hole you played.\n", easiest_hole, hardest_hole);
}

// Function that prints the average scores for par 3, 4, and 5s
void print_averages(hole course[], int length)
{
    int par3_count = 0;
    float total_par3_score = 0;
    int par4_count = 0;
    float total_par4_score = 0;
    int par5_count = 0;
    float total_par5_score = 0;

    for (int i = 0; i < length; i++ )
    {
        if (course[i].par == 3)
        {
            par3_count++;
            total_par3_score += course[i].score;
        }
        else if (course[i].par == 4)
        {
            par4_count++;
            total_par4_score += course[i].score;
        }
        else
        {
            par5_count++;
            total_par5_score += course[i].score;
        }
    }

    if (par3_count <= 0)
    {
        printf("You didn't play any par 3s.\n");
    }
    else
    {
        printf("Your average score on a par 3 was %0.2f.\n", total_par3_score / par3_count);
    }

    if (par4_count <= 0)
    {
        printf("You didn't play any par 4s.\n");
    }
    else
    {
        printf("Your average score on a par 4 was %0.2f.\n", total_par4_score / par4_count);
    }

    if (par5_count <= 0)
    {
        printf("You didn't play any par 5s.\n");
    }
    else
    {
        printf("Your average score on a par 5 was %0.2f.\n", total_par5_score / par5_count);
    }
}

// Function that prints the percentage of birdies or better,
// pars, bogies, double bogies, and triple bogies or worse.
void print_percentages(hole course[], int length)
{
    float birdies = 0;
    float pars = 0;
    float bogies = 0;
    float double_bogies = 0;
    float triple_bogies = 0;

    for (int i = 0; i < length; i++)
    {
        int offset = course[i].par - course[i].score;

        if (offset >= 1)
        {
            birdies++;
        }
        else if (offset == 0)
        {
            pars++;
        }
        else if (offset == -1)
        {
            bogies++;
        }
        else if (offset == -2)
        {
            double_bogies++;
        }
        else
        {
            triple_bogies++;
        }

    }

    printf("Percentages:\n");
    printf("\tBirdy or better: %d%%\n", (int) ((birdies / length) * 100));
    printf("\tPar: %d%%\n", (int) ((pars / length) * 100));
    printf("\tBogey: %d%%\n", (int) ((bogies / length) * 100));
    printf("\tDouble Bogey: %d%%\n", (int) ((double_bogies / length) * 100));
    printf("\tTriple Bogey or Higher: %d%%\n", (int) ((triple_bogies / length) * 100));
}