#include<stdio.h>
int leap(int year){
    if (year%4==0 || year%100==0 || year%400==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int day,month,year,num=0;
    printf("Enter the date in number");
    scanf("%d %d %d",&day,&month,&year);
    int daysinmonths[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    for (int i=0;i<month;i++){
        num+=daysinmonths[i];
    }
    num+=day;
    if (month>2 && (year)==1){
        num+=1;
    }
    printf("%d",num);
    return 0;
}