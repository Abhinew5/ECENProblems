#include <stdio.h>

int main (){
int a = 66;
int b = 0b1101;
int c = 0x80;
int d = 012;
int cf = 01001101;
/** \brief
 *
 * \param
 * \param
 * \return
 *

int cc;
printf("The a value in character is %c \n", a );
printf ("The b value in decimal (short integer) is %d \n", b);
printf ("The c value in decimal is %d \n",c);
cc = printf("The new c value in decimal is %d \n",c);
printf("The cc value i.e. character is %d \n", cc);
//printf("The cc value in character is %c", b);
printf ("The d value in decimal is %d \n", d);

int s = 384;

int x= s%97;

if (x==0){
    printf ("Yes");
}
    else (printf( "No"));
*/

int n = 0b0111;
int k = 0b0101;
float and = n & k ;
int or = n|k;
int not = ~k;
int xor = n ^k;
char t = 2;
char tt = ~t;
char m = ~(tt +1);
int num1 = -76;
int num2 = 34;
int num3 = num1 && num2;
int num4;
printf("The value of a b c and d is %c %d %d %d \n", a, b, c, d);
printf("Any form into decimal system is successfully converting \n");

printf ("The value of b  in hex is %x \n",b );
printf("The binary to hex is successful \n");
printf("The value of cf in decimal and hex and octal and character is %d %x %o %c is \n",cf,cf ,cf, cf);
printf ("The and , or , not, xor operation results are %d %d %d %d", and, or,not, xor);
printf ("binary equivalent for and, or,not, xor are %.3f, 0b%d, 0b%d, 0b%d \n" ,and, or, not, xor);
printf ("tt = %d , m = %d \n", tt, m);
printf("num3 is: %d \n", num3);
//printf("type for num3 is %s \n", (typeof(num3));
//printf("result for num3 is %d \n ", num4 = ~num3);
}




