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
excntUpdate(0);
excntLineArray[0] = 1;
if(
3
<
0
)
{
{
printf("%d\n", 
3
);
excntUpdate(1);
excntLineArray[1] = 4;
printf("%d\n", 
4
);
excntUpdate(2);
excntLineArray[2] = 6;
}
}
else
{
{
printf("%d\n", 
5
);
excntUpdate(3);
excntLineArray[3] = 9;
printf("%d\n", 
6
);
excntUpdate(4);
excntLineArray[4] = 11;
}
}
excntUpdate(5);
excntLineArray[5] = 13;
}
excnt_label:;
printf("---- Execution Counts ----\n");
printf("%4s%5s%9s\n", "num", "line", "count");
printf("%4d%5d%9d\n",1,1,excntArray[0]);
printf("%4d%5d%9d\n",2,4,excntArray[1]);
printf("%4d%5d%9d\n",3,6,excntArray[2]);
printf("%4d%5d%9d\n",4,9,excntArray[3]);
printf("%4d%5d%9d\n",5,11,excntArray[4]);
printf("%4d%5d%9d\n",6,13,excntArray[5]);
return 0; }
