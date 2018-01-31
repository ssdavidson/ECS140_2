int esquare(int x){ return x*x;}
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int excntArray[100] = {0};
void excntUpdate(int index){excntArray[index] += 1;}
int esqrt(int x){ double y; if (x < 0) return 0; y = sqrt((double)x); return (int)y;}
int emodulo(int a , int b){if(a==0){return 0;}if(b==0){printf("\nmod(a,b) with b=0\n");exit(1);};if(b < 0){if(a<0){return -emodulo(-a,-b);}int temp = emodulo(a, -b);if(temp==0){return 0;}else{return -(-b - temp);}}int result = a % b;if(result < 0){result+=b;}return result;}
int emax(int a, int b){if(a > b){return a;} else{return b;}}
#include <stdio.h>
int main() {
{
int
x_a
= -12345;
int
x_b
= -12345;
int
x_c
= -12345;
int
x_d
= -12345;
for(
x_a
=
1
;
x_a
<=
2
;
x_a
++)
{
{
}
}
label_1:;
x_a
=
0
;
for(
x_b
=
1
;
x_b
<=
3
;
x_b
++)
{
{
int
x_x
= -12345;
for(
x_x
=
5
;
x_x
<=
6
;
x_x
++)
{
{
printf("%d\n", 
x_x
);
x_a
=
x_a
+
x_x
;
}
}
label_2_1:;
}
}
label_2:;
printf("%d\n", 
