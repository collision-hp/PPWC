#include<stdio.h>

int main(){
    int amount,n5=0,n2=0,n1=0;
    printf("Enter the amount in multiple of 10 dollars");
    scanf("%d",&amount);
    while(amount>0){
        if (amount>=50){
            n5=amount/50;
            amount-=n5*50;
        }
        else if (amount>=20){
            n2=amount/20;
            amount-=n2*20;
        }
        else if(amount>=10){
            n1=amount/10;
            amount-=n1*10;
        }
    }
    printf("50 are %d\n",n5);
    printf("20 are %d\n",n2);
    printf("10 are %d\n",n1);
    return 0;
}