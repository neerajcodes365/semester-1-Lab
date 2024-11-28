#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, attempts = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("the number will be in between 1 and 100\n");
    do
    {
        printf("guess the number!!!\n");
        scanf("%d", &guess);
        if (number > guess)
        {
            printf("higher number plz ;) \n");
        }
        else if (guess > number)
        {
            printf("lower number plz ;) \n");
        }
        else
        {
            printf("You guessed in %d attempts \n", attempts);
        }
        attempts++;
    } while (guess != number);

    return 0;
}