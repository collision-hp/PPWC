#include<stdio.h>
#include<ctype.h>
#include<string.h>
void capital(char *argv){
    while(*argv){
        *argv=toupper((unsigned char)*argv);
        argv++;
    }
}
int main(){
    char str1[]="mine";
    char str2[]="cs";
    char str3[]="sc";
    char str4[]="soa";

    char *argv[5]={str1,str2,str3,str4,NULL};


    for (int i = 0; argv[i] != NULL; i++) {
        capital(argv[i]);
        printf("argv[%d]: %s\n", i + 1, argv[i]);
    }

    
    return 0;
}