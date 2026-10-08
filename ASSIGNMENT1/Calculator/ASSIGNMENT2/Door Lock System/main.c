#include <stdio.h>
#include <stdlib.h>

int main()
{
    int correctPIN = 2020;
    int userPIN;
    int attempts = 0;
    int granted = 0;

    while(attempts < 3 && !granted){
        printf("ENTER PIN; ");
        scanf("%d", &userPIN);

        if(userPIN == correctPIN){
            printf("ACCESS GRANTED! DOOR UNLOCKED\n");
            granted = 1;
        }
        else{
            attempts++;
            printf("ATTEMPTS REMAINIG: %d", 3 - attempts);
            }
    }
        if(!granted){
            printf("TOO MANY ATTEMPTS! ACCESS DENIED\n");
            }

    return 0;
}
