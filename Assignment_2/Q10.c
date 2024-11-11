#include<stdio.h>

int main(){
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    for (int i = 1; i < 11; i++){
        printf("%d\t",i*num);
    }
    printf("\n");
    for(int i=1;i<11;i++){
        printf("%d\t",i);
    }
    printf("\n");
    for(int i=1;i<11;i++){
        printf("%d\t",num);
    }
    
    return 0;
}