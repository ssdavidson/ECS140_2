int esquare(int x){ return x*x;}
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int excntArray[100] = {0};
int excntLineArray[100] = {0};
void excntUpdate(int index){excntArray[index] += 1;};
int esqrt(int x){ double y; if (x < 0) return 0; y = sqrt((double)x); return (int)y;}
int emodulo(int a , int b){if(a==0){return 0;}if(b==0){printf("\nmod(a,b) with b=0\n");exit(1);};if(b < 0){if(a<0){return -emodulo(-a,-b);}int temp = emodulo(a, -b);if(temp==0){return 0;}else{return -(-b - temp);}}int result = a % b;if(result < 0){result+=b;}return result;}
int emax(int a, int b){if(a > b){return a;} else{return b;}}
#include <stdio.h>
int main() {
{
int
x_repeat
= -12345;
int
x_bigSum
= -12345;
x_bigSum
=
0
;
for(
x_repeat
=
1
;
x_repeat
<=
2
;
x_repeat
++)
{
{
int
x_k
= -12345;
int
x_g
= -12345;
int
x_sum
= -12345;
x_sum
=
0
;
printf("+++ dump on line 10 of all levels begin +++\n");
printf("%12d %3d %3d %s\n",x_repeat,1,0,"repeat");
printf("%12d %3d %3d %s\n",x_bigSum,1,0,"bigSum");
printf("%12d %3d %3d %s\n",x_k,7,1,"k");
printf("%12d %3d %3d %s\n",x_g,7,1,"g");
printf("%12d %3d %3d %s\n",x_sum,7,1,"sum");
printf("--- dump on line 10 of all levels end ---\n");
for(
x_k
=
1
;
x_k
<=
10
;
x_k
++)
{
{
x_sum
=
x_sum
+
x_k
;
printf("+++ dump on line 13 of all levels begin +++\n");
printf("%12d %3d %3d %s\n",x_repeat,1,0,"repeat");
printf("%12d %3d %3d %s\n",x_bigSum,1,0,"bigSum");
printf("%12d %3d %3d %s\n",x_k,7,1,"k");
printf("%12d %3d %3d %s\n",x_g,7,1,"g");
printf("%12d %3d %3d %s\n",x_sum,7,1,"sum");
printf("--- dump on line 13 of all levels end ---\n");
}
}
label_1_1:;
for(
x_g
=
1
;
x_g
<=
10
;
x_g
++)
{
{
x_sum
=
x_sum
+
x_g
;
printf("+++ dump on line 18 of all levels begin +++\n");
printf("%12d %3d %3d %s\n",x_repeat,1,0,"repeat");
printf("%12d %3d %3d %s\n",x_bigSum,1,0,"bigSum");
printf("%12d %3d %3d %s\n",x_k,7,1,"k");
printf("%12d %3d %3d %s\n",x_g,7,1,"g");
printf("%12d %3d %3d %s\n",x_sum,7,1,"sum");
printf("--- dump on line 18 of all levels end ---\n");
}
}
label_1_2:;
x_bigSum
=
x_bigSum
+
x_sum
;
}
}
label_1:;
printf("+++ dump on line 25 of all levels begin +++\n");
printf("%12d %3d %3d %s\n",x_repeat,1,0,"repeat");
printf("%12d %3d %3d %s\n",x_bigSum,1,0,"bigSum");
printf("--- dump on line 25 of all levels end ---\n");
}
excnt_label:;
return 0; }
