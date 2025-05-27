#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomnumber = (rand() % 100) + 1;
    int no_of_guesses=0;
    int guessed_number;
    //print the random number
    // printf("Random Number between 1 and 100: %d\n", randomNumber);
    do
    {
        printf("Guess the number");
        scanf("%d",&guessed_number);
        if(guessed_number>randomnumber){
            printf("lower number please!\n");
        }
        else if(guessed_number<randomnumber){
            printf("higher numebr please!\n");
        }
        else{
            printf("congrats!!\n");
        }
        no_of_guesses++;
    } while (guessed_number!=randomnumber);
    printf("you guessed the number in %d guesses\n",no_of_guesses);
    

    return 0;
}
