// #include<stdio.h>
// int main(){
// int x=-123;
// printf("%u",x);
// return(0);
// }
// //4294967173

// #include<stdio.h>
// int main(){
// int x=-123;
// printf("%X",x);
// return(0);
// }
// //FFFFFF85

// #include<stdio.h>
// int main(){
// char ch='A';
// print("%d",sizeof(ch));
// print("%d",sizeof('A'));
// return(0);
// }
//error

// #include<stdio.h>
// int main(){
// int sum;
// sum = 2 + 4 / 2 + 6 * 2;
// printf("%d", sum);
// return 0;
// }
//16

// #include<stdio.h>
// int main(){
// char ch=97;
// printf("%d", sizeof(ch+4));
// }
//4

// #include<stdio.h>
// int main() {
// int n = printf("Hello\n");
// printf("%d ", n);
// return(0);
// }
//Hello
//6

// #include<stdio.h>
// int main() {
// printf("%d==%f==%lf\n",5,55.5,55.5);
// printf("%i==%e==%E\n",5,555.5,123.45);
// printf("%o==%g==%G\n",9,555.5,123.45);
// return 0;
// }
//5==55.500000==55.500000
//5==5.555000e+002==1.234500E+002
//11==555.5==123.45

// #include<stdio.h>
// int main() {
// printf("%d==%i==%o==%x\n",32,32,32,32);
// printf("%d==%i==%#o==%#x\n",32,32,32,32);
// printf("%d==%i==%#o==%#X\n",32,32,32,32);
// printf("%+d==%+i==%#o==%#X\n",32,32,032,0x45b);
// return 0;
// }
//32==32==40==20
//32==32==040==0x20
//32==32==040==0X20
//+32==+32==032==0X45B


// #include<stdio.h>
// int main() {
// double x=3000.0, y=0.0035;
// printf("%f %f %f\n",x,y,x*y,x/y);
// printf("%e %e %e\n",x,y,x*y,x/y);
// printf("%E %E %E\n",x,y,x*y,x/y);
// return 0;
// }
// 3000.000000 0.003500 10.500000
// 3.000000e+003 3.500000e-003 1.050000e+001
// 3.000000E+003 3.500000E-003 1.050000E+001

// #include<stdio.h>
// int main(){
// int i=54321;
// float x=876.543;
// printf(":%3d: :%5d: :%10d: :%12d:\n",i,i,i,i);
// printf(":%3f: :%10f: :%13f: :%f:\n",x,x,x,x);
// return 0;
// }
// :54321: :54321: :     54321: :       54321:
// :876.543030: :876.543030: :   876.543030: :876.543030:

#include<stdio.h>
int main(){
int a, b, c;
printf("Enter in decimal format:");
scanf("%d", &a);
printf("Enter in octal format: ");
scanf("%d", &b);
printf("Enter in hexadecimal format: ");
scanf("%d", &c);
printf("a = %d, b = %d, c = %d", a, b, c);
printf("Enter in decimal format:");
scanf("%i", &b);
printf("Enter in octal format: ");
scanf("%i", &b);
printf("Enter in hexadecimal format: ");
scanf("%i", &c);
printf("a = %i, b = %i, c = %i\n", a, b, c);
return 0;
}

