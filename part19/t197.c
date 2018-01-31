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
x_repeat
= -12345;
int
x_bigSum
= -12345;
int
x_once
= -12345;
int
x_einmal
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
x_g
= -12345;
int
x_sum
= -12345;
x_sum
=
0
;
for(
x_once
=
1
;
x_once
<=
1
;
x_once
++)
{
{
printf("+++ dump on line 10 of level 1 begin +++\n");
printf("%12d %3d %3d %s\n",x_g,6,1,"g");
printf("%12d %3d %3d %s\n",x_sum,6,1,"sum");
printf("--- dump on line 10 of level 1 end ---\n");
for(
x_einmal
=
1
;
x_einmal
<=
1
;
x_einmal
++)
{
{
int
x_k
= -12345;
for(
x_k
=
1
;
x_k
<=
2
;
x_k
++)
{
{
printf("%d\n", 
x_repeat
);
printf("%d\n", 
x_k
);
printf("+++ dump on line 15 of level 2 begin +++\n");
printf("--- dump on line 15 of level 2 end ---\n");
}
}
label_1_1_1_1:;
}
}
label_1_1_1:;
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
printf("+++ dump on line 22 of level 1 begin +++\n");
printf("%12d %3d %3d %s\n",x_g,6,1,"g");
printf("%12d %3d %3d %s\n",x_sum,6,1,"sum");
printf("--- dump on line 22 of level 1 end ---\n");
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
printf("+++ dump on line 29 of all levels begin +++\n");
printf("%12d %3d %3d %s\n",x_repeat,1,0,"repeat");
printf("%12d %3d %3d %s\n",x_bigSum,1,0,"bigSum");
printf("%12d %3d %3d %s\n",x_once,1,0,"once");
printf("%12d %3d %3d %s\n",x_einmal,1,0,"einmal");
printf("--- dump on line 29 of all levels end ---\n");
}
return 0; }
