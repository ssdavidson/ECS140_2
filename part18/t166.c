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
x_k
= -12345;
int
x_j
= -12345;
int
x_sum
= -12345;
for(
x_j
=
1
;
x_j
<=
3
;
x_j
++)
{
{
x_sum
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
20
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
if(
x_sum
>
30
)
{
{
printf("%d\n", 
888
);
break;
}
}
printf("%d\n", 
x_k
);
}
}
label_1_1:;
printf("%d\n", 
x_sum
);
if(
x_j
>
1
)
{
{
if(
x_sum
>
30
)
{
{
break;
}
}
}
}
}
}
label_1:;
printf("%d\n", 
x_j
);
}
return 0; }
