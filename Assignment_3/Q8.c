#include<stdio.h>
#include<string.h>
int main(){
    char str[]="racecar";
    for (int i=0;i<strlen(str);i++){
        int found=0;
        for (int j=0;j<i;j++){
            if (str[i]==str[j]){
                printf("%c",str[i]);
                found=1;
                break;
            }
        }
        if (found==1){
            break;
        }
    }
    return 0;
}