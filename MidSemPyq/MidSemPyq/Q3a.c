#include<stdio.h>

int main(){
    int n,sum=0,last;
    printf("Enter a number");
    scanf("%d",&n);

    while(n!=0){
        last=n%10;
        printf("%d \n",last);
        sum+=last;
        n/=10;
    }
    if (sum%9==0){
        printf("Divisible by 9\n");
    }
    else{
        printf("Not divisible by 9\n");      
    }
    
    return 0;
}