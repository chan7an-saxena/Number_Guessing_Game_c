#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int random, guess;
    int number_of_guess = 0;
    srand(time(NULL));

    printf("let's start guessing the numbers\n");
    random = rand() % 100 + 1;
    
    do {
        printf("\nenter your guessed number(1 to 100):");
        scanf("%d", &guess);
        number_of_guess++;

        if(guess < random){
            printf("guess a larger number.\n");
        }
        
            else if(guess > random) {
                printf("guess a smaller number.\n");
        }
        else {
            printf("congrats !!!! you guessed correct number now in %d attempts", number_of_guess);

        }
    }
    while (guess != random);
    printf("hope u enjoy this");

}