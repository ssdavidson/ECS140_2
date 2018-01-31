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
int
x_k
= -12345;
excntUpdate(0);
excntLineArray[0] = 3;
excntUpdate(1);
excntLineArray[1] = 4;
excntUpdate(2);
excntLineArray[2] = 5;
excntUpdate(3);
excntLineArray[3] = 6;
excntUpdate(4);
excntLineArray[4] = 7;
excntUpdate(5);
excntLineArray[5] = 8;
excntUpdate(6);
excntLineArray[6] = 9;
excntUpdate(7);
excntLineArray[7] = 10;
excntUpdate(8);
excntLineArray[8] = 11;
excntUpdate(9);
excntLineArray[9] = 12;
excntUpdate(10);
excntLineArray[10] = 14;
excntUpdate(11);
excntLineArray[11] = 15;
excntUpdate(12);
excntLineArray[12] = 16;
excntUpdate(13);
excntLineArray[13] = 17;
excntUpdate(14);
excntLineArray[14] = 18;
excntUpdate(15);
excntLineArray[15] = 19;
excntUpdate(16);
excntLineArray[16] = 20;
excntUpdate(17);
excntLineArray[17] = 21;
excntUpdate(18);
excntLineArray[18] = 22;
excntUpdate(19);
excntLineArray[19] = 23;
excntUpdate(20);
excntLineArray[20] = 25;
excntUpdate(21);
excntLineArray[21] = 26;
excntUpdate(22);
excntLineArray[22] = 27;
excntUpdate(23);
excntLineArray[23] = 28;
excntUpdate(24);
excntLineArray[24] = 29;
excntUpdate(25);
excntLineArray[25] = 30;
excntUpdate(26);
excntLineArray[26] = 31;
excntUpdate(27);
excntLineArray[27] = 32;
excntUpdate(28);
excntLineArray[28] = 33;
excntUpdate(29);
excntLineArray[29] = 34;
excntUpdate(30);
excntLineArray[30] = 36;
excntUpdate(31);
excntLineArray[31] = 37;
excntUpdate(32);
excntLineArray[32] = 38;
excntUpdate(33);
excntLineArray[33] = 39;
excntUpdate(34);
excntLineArray[34] = 40;
excntUpdate(35);
excntLineArray[35] = 41;
excntUpdate(36);
excntLineArray[36] = 42;
excntUpdate(37);
excntLineArray[37] = 43;
excntUpdate(38);
excntLineArray[38] = 44;
excntUpdate(39);
excntLineArray[39] = 45;
excntUpdate(40);
excntLineArray[40] = 47;
excntUpdate(41);
excntLineArray[41] = 48;
excntUpdate(42);
excntLineArray[42] = 49;
excntUpdate(43);
excntLineArray[43] = 50;
excntUpdate(44);
excntLineArray[44] = 51;
excntUpdate(45);
excntLineArray[45] = 52;
excntUpdate(46);
excntLineArray[46] = 53;
excntUpdate(47);
excntLineArray[47] = 54;
excntUpdate(48);
excntLineArray[48] = 55;
excntUpdate(49);
excntLineArray[49] = 56;
excntUpdate(50);
excntLineArray[50] = 58;
excntUpdate(51);
excntLineArray[51] = 59;
excntUpdate(52);
excntLineArray[52] = 60;
excntUpdate(53);
excntLineArray[53] = 61;
excntUpdate(54);
excntLineArray[54] = 62;
excntUpdate(55);
excntLineArray[55] = 63;
excntUpdate(56);
excntLineArray[56] = 64;
excntUpdate(57);
excntLineArray[57] = 65;
excntUpdate(58);
excntLineArray[58] = 66;
excntUpdate(59);
excntLineArray[59] = 67;
excntUpdate(60);
excntLineArray[60] = 69;
excntUpdate(61);
excntLineArray[61] = 70;
excntUpdate(62);
excntLineArray[62] = 71;
excntUpdate(63);
excntLineArray[63] = 72;
excntUpdate(64);
excntLineArray[64] = 73;
excntUpdate(65);
excntLineArray[65] = 74;
excntUpdate(66);
excntLineArray[66] = 75;
excntUpdate(67);
excntLineArray[67] = 76;
excntUpdate(68);
excntLineArray[68] = 77;
excntUpdate(69);
excntLineArray[69] = 78;
excntUpdate(70);
excntLineArray[70] = 80;
excntUpdate(71);
excntLineArray[71] = 81;
excntUpdate(72);
excntLineArray[72] = 82;
excntUpdate(73);
excntLineArray[73] = 83;
excntUpdate(74);
excntLineArray[74] = 84;
excntUpdate(75);
excntLineArray[75] = 85;
excntUpdate(76);
excntLineArray[76] = 86;
excntUpdate(77);
excntLineArray[77] = 87;
excntUpdate(78);
excntLineArray[78] = 88;
excntUpdate(79);
excntLineArray[79] = 89;
excntUpdate(80);
excntLineArray[80] = 91;
excntUpdate(81);
excntLineArray[81] = 92;
excntUpdate(82);
excntLineArray[82] = 93;
excntUpdate(83);
excntLineArray[83] = 94;
excntUpdate(84);
excntLineArray[84] = 95;
excntUpdate(85);
excntLineArray[85] = 96;
excntUpdate(86);
excntLineArray[86] = 97;
excntUpdate(87);
excntLineArray[87] = 98;
excntUpdate(88);
excntLineArray[88] = 99;
excntUpdate(89);
excntLineArray[89] = 100;
for(
x_k
=
1
;
x_k
<=
100
;
x_k
++)
{
{
excntUpdate(90);
excntLineArray[90] = 123;
excntUpdate(91);
excntLineArray[91] = 124;
excntUpdate(92);
excntLineArray[92] = 125;
excntUpdate(93);
excntLineArray[93] = 126;
excntUpdate(94);
excntLineArray[94] = 127;
excntUpdate(95);
excntLineArray[95] = 128;
excntUpdate(96);
excntLineArray[96] = 129;
excntUpdate(97);
excntLineArray[97] = 130;
excntUpdate(98);
excntLineArray[98] = 131;
excntUpdate(99);
excntLineArray[99] = 132;
}
}
label_1:;
printf("%d\n", 
x_k
);
excntUpdate(100);
excntLineArray[100] = 137;
