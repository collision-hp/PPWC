/*The purpose of the break statement in a switch case 
is to terminate the execution of the current case block 
and prevent the code from "falling through" to subsequent 
case blocks.*/
/*Yes, a switch case can work without a break, but this 
will cause fall-through, meaning that after a match is found,
the code for subsequent cases will also execute until a 
break or the end of the switch block is reached.*/


#include <stdio.h>

int main(){
    int day;
    printf("Enter the day number of the week");
    scanf("%d", &day);
    switch (day){
    case 1:
        printf("Monday");break;
    case 2:
        printf("Tuesday");break;
    case 3:
        printf("Wednesday");break;
    case 4:
        printf("Thursday");break;
    case 5:
        printf("Friday");break;
    case 6:
        printf("Saturday");break;
    case 7:
        printf("Sunday");break;
    default:
        printf("Invalid Input");
    }
    return 0;
}