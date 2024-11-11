#include<stdio.h>

int main(){
    int marks,mrks;
    printf("Enter your marks obtained out of 100");
    scanf("%d",&marks);
    mrks=marks/10;
    switch (mrks){
    case 9:
        if (marks>=95){
            printf("O");
        }
        else{
            printf("A");
        }break;
    case 8:
        if (marks==80){
            printf("B");
        }
        else{
            printf("A");
        }break;
    case 7:
        if (marks==70){
            printf("C");
        }
        else{
            printf("B");
        }break;
    case 6:
        if (marks==60){
            printf("D");
        }
        else{
            printf("C");
        }break;
    case 5:
        if (marks==50){
            printf("E");   
        }
        else{
            printf("D");
        }break;
    case 4:
        printf("E");break;
    default:
        printf("F");break;
    }
    return 0;
}