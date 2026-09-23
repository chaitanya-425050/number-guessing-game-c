#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 1
#define MAX 100

int get_guess()
{ 
    int input;
    while(1)
    {
        printf("Enter a guess between %d - %d : ", MIN, MAX);
        if(scanf("%d", &input) == 1)
        {
            while(getchar() != '\n');
            if(input >= MIN && input <= MAX)
            {
                return input;
            }
            printf("Please enter a number within the range!\n");
        } else {
            printf("In-valid input please try again.\n");
            while(getchar() != '\n');
        }
    }
}

int check_guess(int number, int guess)
{
    if(number == guess)
    {
        printf("Congratulations, You won the game. :)\n");
        return 1;
    } else if(guess < number)
    {
        printf("Guess a higher number.\n");
        return 0;
    } else
    {
        printf("Guess a lower number.\n");
        return 0;
    } 
}

int choice()
{
    char option;
    while(1)
    {
        printf("Enter C/c to continue and Q/q to Quit : ");
        if(scanf(" %c", &option) == 1)
        {
            while(getchar() != '\n');
            if(option == 'Q' || option == 'q')
            {
                return 0;
            } else if(option == 'C' || option == 'c')
            {
                return 1;
            } else
            {
                printf("Invalid choice, please try again.\n");
            }
        }
    }
}

int main()
{
    srand(time(NULL));

    printf("====================================\n");
    printf("   WELCOME TO THE NUMBER GUESSER    \n");
    printf("====================================\n");

    while(1)
    {
        printf("\n--- New Game Started ---\n");
        int number = (rand() % MAX) + MIN; //Random number between MIN - MAX
        int guess, count = 0;

        while(1)
        {
            count++;
            guess = get_guess();

            if(check_guess(number, guess) == 1)
            {
                printf("Found the number in %d attempts\n", count);
                break;
            } 
        }

        if(choice() == 0)
        {
            printf("Thanks for playing, have a good day.\n");
            break;
        }
    }
}