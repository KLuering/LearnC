// Kevin Luering
// C Programming Scenario - When to Shave?

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    //Data
        long people;
        int critics;
        double hairLength;
        char specificStyle[3];
        char comfort;
        char firstOfNov;
        
    //Input
        printf("What is the length of your facial hair? (in cm) \n");
        scanf("%lf", &hairLength);

        printf("Is it comfortable? (Y or N)\n");
        scanf("%c", &comfort);

        printf("How many people have spoken with you today? \n");
        scanf("%li", &people);

        printf("How many have told you to shave? \n");
        scanf("%d", &critics);

        printf("Is it the first of November? (Y or N)\n");
        scanf("%c", &firstOfNov);

        printf("Are you going for a specific style? (Yes or No)\n");
        scanf("%s", &specificStyle);

    //Decisions 
        if(hairLength > 0 && people >= 4 && critics >= 2 && strcmp(comfort, "N") == 1){
            printf("You should shave.");
        }
        else if(strcmp(specificStyle, "Yes") == 1){
            printf("You should shave.");
        }
        else if(strcmp(firstOfNov, "Y") == 1){
            printf("You should shave.");
        }
        else{
            printf("Do not shave.");
        }
return 0;
} //end main
