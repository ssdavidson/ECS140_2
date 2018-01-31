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
printf("+++ dump on line 2 of all levels begin +++\n");
printf("%12d %3d %3d %s\n",x_a,1,0,"a");
printf("%12d %3d %3d %s\n",x_b,1,0,"b");
printf("%12d %3d %3d %s\n",x_c,1,0,"c");
printf("--- dump on line 2 of all levels end ---\n");
x_a
=
10
;
x_b
=
20
;
printf("+++ dump on line 5 of all levels begin +++\n");
printf("%12d %3d %3d %s\n",x_a,1,0,"a");
printf("%12d %3d %3d %s\n",x_b,1,0,"b");
printf("%12d %3d %3d %s\n",x_c,1,0,"c");
printf("--- dump on line 5 of all levels end ---\n");
x_a
=
x_b
;
x_c
=
44
;
printf("+++ dump on line 8 of all levels begin +++\n");
printf("%12d %3d %3d %s\n",x_a,1,0,"a");
printf("%12d %3d %3d %s\n",x_b,1,0,"b");
printf("%12d %3d %3d %s\n",x_c,1,0,"c");
printf("--- dump on line 8 of all levels end ---\n");
printf("+++ dump on line 9 of all levels begin +++\n");
printf("%12d %3d %3d %s\n",x_a,1,0,"a");
printf("%12d %3d %3d %s\n",x_b,1,0,"b");
printf("%12d %3d %3d %s\n",x_c,1,0,"c");
printf("--- dump on line 9 of all levels end ---\n");
}
excnt_label:;
return 0; }
