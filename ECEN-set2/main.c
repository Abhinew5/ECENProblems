#include <stdio.h>
#include <stdlib.h>

 //Problem -11: While loop
 int main (){
 int i,s;
 while (i<5){
    s= s+ i;
    i= i +1;
    printf ("s= %d \n",s);
 }
 printf ("%d",s);
 }


 /**Problem -10: For loop
 int main(){
 int i,s;
 for (i=0;i<5;i++){
    s= s + i;
    printf("s = %d \n",s);
 }
 printf("%d",s);
 }


 /**Problem -9: IF and LOOP
int main (){
int i,s;
i=0;
s=0;
l:
    if (i<5){
        s= s+i;
        i= i+1;
        printf("s = %d \n",s);
        goto l;
    }
    printf("%d",s);

    }


/**Problem -8: Result2
int main (){
int r;
printf ("Enter the number: ");
scanf("%d", &r);
if (r>58){
    printf ("Pass");
}
else printf ("Fail");
}


/**Problem -7: Result
int main (){
int x;
printf ("Enter the marks: ");
scanf("%d", &x);
if (x < 40){
    printf("Fail");
}
else printf ("Pass");

}

/** Problem -6: BODMAS
int main (){
int x,y,z,s;
 printf ("Enter two digit number : ");
 scanf ("%d", &x);
 y = x /10;
 z= x % 10;
 s = y+z;
 printf ("The y,z,s result is %d %d %d", y,z,s);
}


/** Problem -5: User input 3 digit and /100
int main (){
int x ,y;
printf ("Enter three digits num : ");
scanf("%d",&x);
y = x /100;
printf ("y = %d",y);
}
/**Problem -4: User input 3 digit and quotient then remainder
int main (){
int x,y,z;
printf ("Enter 3 digit num");
scanf ("%d", &x);
y = x /10;
z= y % 10;
printf ("the value y and z is %d %d",y, z);
}

/**Problem -3: User input 3 digit and remainder
int main(){
int x , y;
printf ("Enter 3 digit number:");
scanf ("%d", &x);
y = x %10;
printf ("y value is %d",y);

}


/**Problem -2: User input and quotient
int main (_){
int x,y;
printf("Enter a num: ");
scanf ("%d",&x);
y = x / 10;
printf ("The x and y are %d, %d",x,y);
}

/**Problem -1 : User input and remainder
int main()
{
    int x,y;
    printf("Enter number: \n");
    scanf ("%d",&x);
    y = x %10;
    printf("%d when x was %d \n",y, x);
    return 0;
}
*/
