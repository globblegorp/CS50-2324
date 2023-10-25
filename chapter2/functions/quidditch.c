#include <cs50.h>
#include <stdio.h>

// function prototype
int final_score(int goal_num, bool snitch_caught);

int main(void)
{
    int goal_num = get_int("Number of times your chasers got the quaffle through a hoop: ");
    bool snitch_caught = get_int("Did your team's seeker catch the snitch? Enter 1 if true, 0 otherwise: ");
    int score = final_score(goal_num, snitch_caught);
    printf("Your team's final score is: %d\n", score);
}

// function definition - a function that calculates the final score
int final_score(int goal_num, bool snitch_caught)
{
    // Calculate the score with the number of goals (10 pts each goal)
    int score = 10 * goal_num;

    // Add 150pts if the snitch was caught
    if (snitch_caught)
    {
        score += 150;
    }

    // Return the score
    return score;
}