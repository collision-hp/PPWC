#include<stdio.h>

int main(){
    float m;
    printf("Enter the distance in meters\n");
    scanf("%f",&m);
    printf("Unit \t\t\tValue\n");
    
    printf("Kilometers - \t\t%f\n",m*0.001);
    printf("Centimeters - \t\t%f\n",m*100);
    printf("Milimeters - \t\t%f\n",m*1000);
    printf("Feet - \t\t\t%f\n",m*3.28084);
    printf("Inches - \t\t%f\n",m*39.3701);
    
    return 0;
}