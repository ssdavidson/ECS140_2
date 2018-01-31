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
x_i
= -12345;
int
x_k
= -12345;
int
x_long
= -12345;
int
x_n
= -12345;
x_i
=
25
;
while(1){
if(
10
!=
x_i
)
{
{
if(
20
==
x_i
)
{
{
x_k
=
20
-
x_i
;
while(1){
if(
x_k
)
{
{
printf("%d\n", 
x_k
);
x_k
=
x_k
+
1
;
}
}
else break;
}
label_1_1:;
}
}
else
if(
15
==
x_i
)
{
{
x_k
=
15
-
x_i
;
x_n
=
5
;
while(1){
if(
x_k
)
{
{
x_long
=
10
*
x_k
;
printf("%d\n", 
x_long
);
x_k
=
x_k
+
1
;
}
}
else
if(
x_n
)
{
{
printf("%d\n", 
x_n
);
x_n
=
0
;
}
}
else break;
}
label_1_2:;
printf("%d\n", 
x_long
);
}
}
else
{
{
x_k
=
10
-
x_i
;
while(1){
if(
x_k
)
{
{
printf("%d\n", 
x_k
);
x_k
=
x_k
+
1
;
}
}
else break;
}
label_1_3:;
}
}
x_i
=
x_i
-
1
;
}
}
else break;
}
label_1:;
printf("%d\n", 
x_i
);
}
return 0; }
