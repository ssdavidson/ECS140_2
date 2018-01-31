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
for(
x_k
=
0
-
10
;
x_k
<=
10
;
x_k
++)
{
{
printf("%d\n", 
x_k
);
printf("%d\n", 
x_k
%
5
);
}
}
label_1:;
printf("%d\n", 
999
);
for(
x_k
=
0
-
10
;
x_k
<=
10
;
x_k
++)
{
{
printf("%d\n", 
x_k
);
printf("%d\n", 
x_k
%
5
%
2
);
}
}
label_2:;
printf("%d\n", 
300
+
23
%
5
+
6
%
4
);
printf("%d\n", 
10
*
4
%
6
*
11
);
printf("%d\n", 
100
%
9
%
3
);
}
return 0; }
