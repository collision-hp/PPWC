#include <stdio.h>
int main(){
    int la = 345;
    float fb = 4.5;
    char var = 'Z';
    printf("%d %p\n", la, &la);
    printf("%f %p\n", fb, &fb);
    printf("%c %p\n", var, &var);
    return 0;
}