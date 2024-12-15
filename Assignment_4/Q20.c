#include<stdio.h>
double sumnavg(double n1,double n2,double n3){
    double sump=n1+n2+n3;
    double avgp=sump/3;
}
int main(){
    double one,two,three,sump,avgp;
    printf("Enter the 3 numbers");
    scanf("%lf %lf %lf",&one,&two,&three);
    sumnavg(one,two,three);
    return 0;
}