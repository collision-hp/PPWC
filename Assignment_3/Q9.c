#include<stdio.h>
#include<string.h>
int main(){
    char str[]="bintu";
    int ch;
    for (int i = 0; i < strlen(str); i++){
        ch=0;
        for (int j = 0; i < strlen(str); i++){
            if(str[i]==str[j]){
                ch++;
            }
            printf("%c - %d\n",str[i],ch);
        }
    }
    return 0;
}