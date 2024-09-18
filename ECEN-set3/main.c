#include <stdio.h>
#include <stdlib.h>

//Problem -10:




/**Problem -9: String is array of character
int main (){
//char a[2];
//char a[2] = {'e','f'};
char a[2] = "ef"; //it'll print ef
//a[0]= 'A';
//a[1] = 'K';
//printf ("The characters are : %c  %c\n",a[0],a[1]);
//printf("The characters are : %s \n", &a[0]); // i.e. will take characters present at a[0] to so on.
printf ("The characters are : %s \n", a);
}


/**Problem -8: Array with single number and average
int main (){
int i, m[3],s;
s=0;
printf("%d \n",s);
m[0] = 45;
m[1] = 34;
m[2] = 43;
//m[3] =78;
for (i=0;i<2;i++){
        printf("i and s are : %d %d \n",i,s);
    s = s + m[i];
}
printf ("s =%d",s);
}









/**Problem -7: Array Average
int main (){
int a,s,m[5];
m[0] = 63;
m[1]= 68;
m[2] = 87;
m[3] = 67;
m[4] = 90;
m[5] = 98;
m[6] = 38;
m[7] = 70;
s = m[0] + m[1] + m[2] + m[3] + m[4] + m[5] +m[6] + m[7];   //m[5] is defined then how m[7] not throwing error
a = s/7;
printf ("a = %d",a);
}


/**Problem -6: Average
int main (){
int s,m1,m2,m3,m4,m5,a;
m1 = 49;
m2 = 68;
m3 = 53;
m4 = 93;
m5 = 29;
s = m1 + m2 + m3 + m4 + m5;
a = s/5;
printf ("a = %d",a);
}

/** Problem -5: Divisible by 6
int main (){
int i = 1;
int s =0;
while (i<10){
    if (i % 6 ==0){
        s= s+1;
            }
        i = i+1;

}
printf ("s= %d",s);
}

/**Problem -4: Counting odd no. from 1 to 50 or divisible by 5
int main (){
int s=0;
int i;
for (i=0;i<=10;i++){
    if ((i%2 !=0) || (i % 5==0)){
    //if (i%2 !=0) {
        s=s+1;
    }

}
printf("s=%d",s);
}

Problem -3: Counting odd number from 1 to 100
int main (){
int i=100;
int s=0;
while ( i >0){
    if (i % 2 != 0){
    s= s+1;
    }
    i = i-1;
}
printf ("While loop: s= %d",s);
}

/** Problem -2: counting even no. from 1 to 10

int main (){
int s =0;
int i;
for (i=0; i<10; i++){
    if(i%2 == 0){
        s=s+1;
    }
}
printf("s= %d",s);

}


/** Problem -1 :
int main(){
int i=0;
int s=0;
for (i=0;i<10;i++){
    if (i%2 == 0){
        s =s +i;
    }
}
    printf("s = %d",s);
}
*/

