#include<stdio.h>

int main(){
    char gr;
    int mavg,cavg,fper;
    printf("Enter desired grade>\n");
    scanf("%c",&gr);
    printf("Enter minimum average required>\n");
    scanf("%d",&mavg);
    printf("Enter current average in course>\n");
    scanf("%d",&cavg);
    printf("Enter how much the final counts as a percentage of the course grade>\n");
    scanf("%d",&fper);
    float pas=0;
    pas= (mavg - (cavg * (1 - (fper / 100.0)))) / (fper / 100.0);
    printf("You need a score of %f to pass in the final exams to get a grade %c",pas,gr);
    return 0;
}