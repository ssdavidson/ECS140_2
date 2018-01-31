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
x_i
= -12345;
int
x_j
= -12345;
for(
x_i
=
1
;
x_i
<=
4
;
x_i
++)
{
{
printf("%d\n", 
x_i
);
}
}
label_1:;
for(
x_i
=
2
;
x_i
<=
5
;
x_i
++)
{
{
for(
x_j
=
x_i
;
x_j
<=
5
;
x_j
++)
{
{
printf("%d\n", 
x_i
*
100
+
x_j
);
}
}
label_2_1:;
}
}
label_2:;
for(
x_i
=
2
;
x_i
<=
9
;
x_i
++)
{
{
for(
x_j
=
1
;
x_j
<=
5
;
x_j
++)
if( 
x_i
!=
x_j
)
{
{
printf("%d\n", 
x_i
*
100
+
x_j
);
}
}
label_3_1:;
}
}
label_3:;
for(
x_j
=
10
;
x_j
<=
3
;
x_j
++)
{
{
printf("%d\n", 
2000
+
x_j
);
}
}
label_4:;
}
excnt_label:;
return 0; }
