#include<stdio.h>

int main(){
    int n,a=0,b=0,c=0,f=0;
    printf("Enter the number of students");
    scanf("%d",&n);
    int marks[n];
    for (int i = 0; i < n; i++){
        printf("Enter your marks");
        scanf("%d",&marks[i]);
    }
    for (int i=0;i<n;i++){
        if (marks[i]<0 && marks[i]>100){
            printf("Enter valid marks\n");
            continue;
        }
        else if (marks[i]>=80){
            a++;
        }
        else if (marks[i]<=79 && marks[i]>=65){
            b++;
        }
        else if (marks[i]<=64 && marks[i]>=40){
            c++;
        }
        else if (marks[i]<=39){
            f++;
        }
    }
    printf("A");
    printf("%d\n",a);
    printf("B");
    printf("%d\n",b);
    printf("C");
    printf("%d\n",c);
    printf("F");
    printf("%d\n",f);
    
    return 0;
}