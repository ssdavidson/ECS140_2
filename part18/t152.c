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
x_b
= -12345;
int
x_c
= -12345;
x_a
=
10
;
x_b
=
20
;
x_c
=
12
;
printf("%d\n", 
emax(
x_a
,
x_b
)
);
printf("%d\n", 
emax(
x_b
,
x_a
)
);
printf("%d\n", 
emax(
x_a
,
x_c
)
);
printf("%d\n", 
emax(
x_c
,
x_b
)
);
printf("%d\n", 
emax(
x_a
+
x_b
,
x_b
-
x_c
)
);
printf("%d\n", 
emax(
x_a
-
x_b
,
x_c
-
x_b
)
);
}
return 0; }
