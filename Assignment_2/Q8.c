#include<stdio.h>
#include<math.h>
int main(){
    float x;
    float sum=0,term=0;
    printf("Enter an integer");
    scanf("%f",&x);
    term=(x-1)/x;
    sum=term;
    for(int i=0;i<10;i++){
        sum+=0.5*(pow(term,i));
    }
    printf("%f",sum);
    return 0;
}
