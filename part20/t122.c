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
x_n
= -12345;
for(
x_k
=
5
;
x_k
<=
1
;
x_k
++)
if( 
x_k
!=
3
)
{
{
printf("%d\n", 
x_k
);
}
}
label_1:;
printf("%d\n", 
x_k
);
x_n
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
5
;
x_k
++)
{
{
if(
x_k
!=
33
)
{
{
x_n
=
x_n
+
1
;
printf("%d\n", 
x_k
);
}
}
else
{
{
printf("%d\n", 
8888
);
exit(0);
printf("%d\n", 
777
);
printf("%d\n", 
333
);
}
}
}
}
label_2:;
printf("%d\n", 
x_n
);
exit(0);
printf("%d\n", 
999
);
}
excnt_label:;
return 0; }
