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
x_k
= -12345;
int
x_g
= -12345;
int
x_h
= -12345;
x_g
=
1
;
x_h
=
1
;
for(
x_k
=
1
;
x_k
<=
20
;
x_k
++)
{
{
int
x_newg
= -12345;
printf("%d\n", 
x_h
);
x_newg
=
x_h
;
x_h
=
x_g
+
x_h
;
x_g
=
x_newg
;
}
}
label_1:;
}
excnt_label:;
return 0; }
