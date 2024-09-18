#include <stdio.h>
int main (){
int a,b,c;
printf("Provide two digit number: \n");
scanf("%d", &a );
b = a%10;

printf("The one's digit is %d \n", b);

c= a/10;
printf("The ten's digit is %d \n", c);
int d,e,f,g;
printf("Provide three digit number : \n");

scanf("%d", &d);
e= d/100;
f= d/10;
printf("%d \n", e);
g = f%10;
printf("%d", g);
}
