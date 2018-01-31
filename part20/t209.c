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
x_x
= -12345;
int
x_y
= -12345;
x_x
=
2
;
while(1){
if(
x_x
<
1000
)
{
{
excntUpdate(0);
x_y
=
3
;
while(1){
if(
x_y
<
400
)
{
{
excntUpdate(1);
if(
x_x
+
x_y
>
444
)
{
{
excntUpdate(2);
printf("%d\n", 
x_x
);
printf("%d\n", 
x_y
);
printf("+++ dump on line 12 of all levels begin +++\n");
printf("%12d %3d %3d %s\n",x_x,1,0,"x");
printf("%12d %3d %3d %s\n",x_y,1,0,"y");
printf("--- dump on line 12 of all levels end ---\n");
goto label_1;
}
}
excntUpdate(3);
x_y
=
x_y
+
3
;
}
}
else break;
}
label_1_1:;
excntUpdate(4);
x_x
=
x_x
+
2
;
}
}
else break;
}
label_1:;
excntUpdate(5);
printf("+++ dump on line 22 of all levels begin +++\n");
printf("%12d %3d %3d %s\n",x_x,1,0,"x");
printf("%12d %3d %3d %s\n",x_y,1,0,"y");
printf("--- dump on line 22 of all levels end ---\n");
}
excnt_label:;
printf("---- Execution Counts ----\n");
printf("%4s%9s\n", "num", "count");
printf("%4d%9d\n",1,excntArray[0]);
printf("%4d%9d\n",2,excntArray[1]);
printf("%4d%9d\n",3,excntArray[2]);
printf("%4d%9d\n",4,excntArray[3]);
printf("%4d%9d\n",5,excntArray[4]);
printf("%4d%9d\n",6,excntArray[5]);
return 0; }
