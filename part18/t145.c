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
emodulo(
x_k
,
5
)
);
}
}
label_1_1:;
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
emodulo(
x_k
,
0
-
5
)
);
}
}
label_1_2:;
printf("%d\n", 
888
);
printf("%d\n", 
emodulo(
8
,
5
)
);
printf("%d\n", 
emodulo(
19
,
7
)
);
printf("%d\n", 
emodulo(
1000
,
emodulo(
2000
,
1009
)
)
);
x_k
=
0
-
2000
;
printf("%d\n", 
x_k
%
33
);
printf("%d\n", 
x_k
%
(
0
-
33
)
);
printf("%d\n", 
emodulo(
x_k
,
33
)
);
printf("%d\n", 
emodulo(
x_k
,
0
-
33
)
);
printf("%d\n", 
emodulo(
19
,
11
)
);
printf("%d\n", 
emodulo(
8
,
5
)
*
emodulo(
19
,
7
)
*
emodulo(
emodulo(
1000
,
emodulo(
2000
,
1009
)
)
+
emodulo(
19
,
11
)
,
5
)
);
printf("%d\n", 
emodulo(
19
,
7
)
);
printf("%d\n", 
emodulo(
emodulo(
8
,
5
)
*
emodulo(
19
,
7
)
*
emodulo(
emodulo(
1000
,
emodulo(
2000
,
1009
)
)
+
emodulo(
19
,
11
)
,
5
)
+
74
,
emodulo(
19
,
7
)
)
);
printf("%d\n", 
777
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
emodulo(
5
,
x_k
)
);
}
}
label_1_3:;
printf("%d\n", 
666
);
}
}
label_1:;
}
return 0; }
