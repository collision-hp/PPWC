/*
When break is encountered inside a loop, the loop 
is immediately terminated, and the program continues
execution at the next statement after the loop.

The continue statement is used to skip the current 
iteration of the loop and move directly to the next 
iteration
*/

#include <stdio.h>
int main(){
    for (int i = 5; i; i--){ //  by default i will go till 1
        if (i == 5){
            continue;
        }
        if (i==3){
            break;
        }
        printf("%d \n", i);
    }
    return 0;
}