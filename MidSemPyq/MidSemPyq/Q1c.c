#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of eggs");
    scanf("%d",&n);
    int dozen=0,left=0,gross=0;
    gross=n/144;
    dozen=n/12;
    left=n%12;
    printf("You have %d gross of eggs ,%d dozen of eggs and you are left with %d no. of eggs",gross,dozen,left);
    return 0;
}