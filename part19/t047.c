int esquare(int x){ return x*x;}
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
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
x_aone
= -12345;
x_a
=
1
;
x_aone
=
11
;
printf("%d\n", 
x_a
);
if(
0
-
1
)
{
{
int
x_a
= -12345;
int
x_atwo
= -12345;
x_a
=
2
;
x_atwo
=
22
;
printf("%d\n", 
x_a
);
if(
0
-
1
)
{
{
int
x_a
= -12345;
int
x_athree
= -12345;
x_a
=
3
;
x_athree
=
33
;
printf("%d\n", 
x_a
);
if(
0
-
1
)
{
{
int
x_a
= -12345;
int
x_afour
= -12345;
x_a
=
4
;
x_afour
=
44
;
printf("%d\n", 
x_a
);
}
}
printf("%d\n", 
x_a
);
printf("%d\n", 
