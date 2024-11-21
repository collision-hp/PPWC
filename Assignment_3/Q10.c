#include<stdio.h>
#include<math.h>
int main(){
    long int hex=0,i=0,rem;
    long int bi=1110;
    while(bi!=0){
        rem=bi%10;
        hex+=rem*(pow(2,i));
        i++;
        bi/=10;
    }
    printf("Hexadecimal number is %x",hex);
    return 0;
}