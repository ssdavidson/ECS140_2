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
x_k
= -12345;
int
x_sume
= -12345;
int
x_sumo
= -12345;
excntUpdate(0);
excntLineArray[0] = 2;
x_sume
=
0
;
x_sumo
=
0
;
for(
x_k
=
1
;
x_k
<=
1000
;
x_k
++)
{
{
excntUpdate(1);
excntLineArray[1] = 6;
if(
emodulo(
x_k
,
2
)
==
0
)
{
{
x_sume
=
x_sume
+
x_k
;
excntUpdate(2);
excntLineArray[2] = 9;
}
}
else
{
{
x_sumo
=
x_sumo
+
x_k
;
excntUpdate(3);
excntLineArray[3] = 12;
}
}
excntUpdate(4);
excntLineArray[4] = 14;
if(
emodulo(
x_k
,
10
)
==
0
)
{
{
printf("+++ dump on line 16 of all levels begin +++\n");
printf("%12d %3d %3d %s\n",x_k,1,0,"k");
printf("%12d %3d %3d %s\n",x_sume,1,0,"sume");
printf("%12d %3d %3d %s\n",x_sumo,1,0,"sumo");
printf("--- dump on line 16 of all levels end ---\n");
excntUpdate(5);
excntLineArray[5] = 17;
}
}
if(
x_k
>
9999
)
{
{
excntUpdate(6);
excntLineArray[6] = 20;
}
}
}
}
label_1:;
excntUpdate(7);
excntLineArray[7] = 23;
}
excnt_label:;
printf("---- Execution Counts ----\n");
printf("%4s%5s%9s\n", "num", "line", "count");
printf("%4d%5d%9d\n",1,2,excntArray[0]);
printf("%4d%5d%9d\n",2,6,excntArray[1]);
printf("%4d%5d%9d\n",3,9,excntArray[2]);
printf("%4d%5d%9d\n",4,12,excntArray[3]);
printf("%4d%5d%9d\n",5,14,excntArray[4]);
printf("%4d%5d%9d\n",6,17,excntArray[5]);
printf("%4d%5d%9d\n",7,20,excntArray[6]);
printf("%4d%5d%9d\n",8,23,excntArray[7]);
return 0; }
