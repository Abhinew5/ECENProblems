#include <stdio.h>
#include <stdlib.h>


//37. Print sum of 3 digit no. whose one's and 100's digit sum are bigger
int main (){
int i,j,k;
i=0;
while(i<2){
      printf("Enter the three digits number: ");
      scanf("%d",&j);
      printf("enter the next three digits number:");
      scanf("%d",&k);
      if ((j/100+ j%10)> (k/100+k%10)){
        printf ("The answer from first number is %d \n", j/100 + (j/10)%10 + j%10);
      }
      else {
        printf ("The answer from second number is %d \n", k/100 + (k/10)%10 + k%10);
      }
      i++ ;
      }
}
























/** /36. print difference between 100's digit and one's digit if ten's digit is greater than other's ten's digit
int main (){
int i,j,k;
i=0;
while(i<2){
    printf ("enter first three digits num: ");
    scanf("%d",&j);
    printf ("enter second three digits num: ");
    scanf( "%d", &k);
    if (((j/10))%10 > ((k/10)%10)){
        printf("The result from first num is %d \n", abs(j/100 - j%10));
    }
    else {
        printf("The result from second num is %d \n", abs(k/100 - k%10));
    }

i++ ;
}
}


/** /35. print self addition of greatest (2 digits) number
int main (){
int i,j,k ;
i=0;
while (i<2){
    printf("Enter two digits number ");
    scanf("%d",&j);
    printf ("enter next two digits number ");
    scanf("%d",&k);
    if(j>k){
        printf("The result is from first num: %d \n",(j/10+j%10));
    }
    else{
        printf ("The result is from second num: %d \n", (k/10 + k%10));
    }
i++;
}

}


/** /34. print the difference if less than 100 otherwise addition if > 100
int main (){
int i,j,k;
i =0;
while(i<2){
    printf("Enter first two digits number ");
    scanf("%d",&j);
    printf("Enter second two digits number ");
    scanf("%d",&k);
    if ((j+k )>100){
        printf ("The addition as > 100 is %d \n", j+k);
    }
    else {
        printf("The difference as < 100 is %d \n", abs(j-k) );
    }
    i++ ;
}
}



/** /33. print the sum of three digits if < 10 or again addition till the time addition becomes less than 10
int main (){
int i ,j,k,l,m;
while (i<2){
    printf ("enter the no. ");
    scanf("%d", &j);
    k =j/100 + (j/10)%10 + j%10;
    if (k<10){
    printf("The answer is %d \n", k);
    }
    else {
        l = k/10 + k%10;
        if (l<10){
    printf ("The answerr is %d \n",l);
        }
        else{
            m = l/10 + l%10;
            printf ("The answerrr is %d \n", m);
        }
    }

    i++;
}
}





/** /32. success if sum of ten's and hundred's digits = 10 and one of them >7
int main(){

int i,j,k,l,m;
i=0;
while (i<2){
    printf ("enter four digits number:  ");
    scanf("%d", &j);
    k = (j/100)%10 + (j%100)/10;
    l = (j/100)%10 ;
    m = (j%100)/10;
    if ((k== 10) && (l>7) || (m>7)){
        printf("Success \n");
    }
    else {
        printf ("fail \n");
    }
     i++ ;
    }

}
























/** /31. success if sum of ten's digit and hundred's digit > 100
int main (){
int i,j,k;
i=0;
while (i<2){
    printf("enter the number: ");
    scanf("%d",&j);
    k = (j/100)%10 + ((j%100)/10) ;
    //printf("k is %d",k);
    if (k>10){
    printf ("success \n");
    }
    else {
        printf("fail \n");
    }
   i++ ;

}

}




























/** /30. success if one's and hundred's digits addition < 10
int main (){
int i,j,k;
i=52;
while (i>50){
    printf ("Enter the three digits number: ");
    scanf("%d", &j);
    k = j/100 + j%10 ;
    if (k < 10){
        printf ("Success \n");

    }
    else {
        printf("fail \n");
    }
    i -- ;
}

}

























/** /29. print success if three digits self addition is 10
int main (){
int i,j,k;
i=0;
while (i<2){
    printf ("enter the three digit number");
    scanf("%d", &j);
    k = j/100+ j%10 + ((j/10)%10);
    if (k==10){
    printf ("success \n");
    }
    else {
        printf ("fail \n");
    }
    i++ ;

}


}




















/** /28. print success if two digits self addition is 10
int main (){
int i,j,k;
i=0;
while(i<2){
    printf ("Number plz: ");
    scanf("%d", &j);
    k = ((j%10) + (j /10));
    if (k==10){
        printf("Success \n");
    }
    else{
        printf ("Fail \n");
    }
    i++ ;
}
}








/** /27. Subtract 5 if ten's digit and 100's digits are same
int main (){
int i,j,a;
i=4;
while (i>2){
    printf("Put the number :");
    scanf("%d", &j);
    a = (((j%100)/10)== ((j/100)%10));
    printf ("a = %d \n", a);
    printf ("The result is %d \n", j - 5*a );
    i-- ;
}
}

/** /26. Subtract 5 if one's digit and 100's digit are same
int main (){
int i,j,a;
i = 0;
while (i<2){
    printf ("Enter the number : ");
    scanf("%d", &j);
    a = ((j%10)== (j/100));                //relational operator
    printf ("a = %d \n", a);
    printf("The result is %d \n", j - 5*a);
    i++ ;

}

}


/** /25. self addition and if odd then subtract 5
int main (){
int i,j;
i=0;
while (i<2){
    printf ("Enter the number :");
    scanf("%d", &j);
    printf ("The result is %d \n", j - ((j%10 + j/10)%2)*5);
    i++ ;

}
}




/** /24. if addition is odd , subtract 5 without if
int main (){
int i,j;
i=0;
while (i<2){
    printf ("Enter number here :");
    scanf ("%d", &j);
    printf ("The result is %d \n", (j/10)+(j%10)
}

}

/** /23. same but ten's digit if odd in 3 digit numbers
int main (){
int i,j;
i=0;
while (i<2){
    printf ("Enter number: ");
    scanf ("%d", &j);
    printf ("The result is %d \n", j-((j/10)%2)*5);
    i++ ;
}
}

























/** /22. if odd then subtract 5  without using if
int main (){
int i,j;
i =0;
while (i<2){
    printf ("enter number: ");
    scanf("%d", &j);
    printf ("The result is %d \n", j - (j%2)*5);
    i++ ;
}
}




























/** /21. Make ten's digit as 0 in three digit no.
int main (){
int i=0;
int j;
while(i<2){
    printf ("Enter the numbere here:");
    scanf ("%d",&j);
    printf ("The result is : %d \n", (j/100)*100 + (j%10));
    i++ ;
}
}


/** 20. Make one's digit as 2 in three digit no.
int main (){
int i,j;
i=0;
while(i<2){
   printf ("enter the number here : ");
   scanf ("%d", &j);
   printf ("%d \n", (j/10)*10+2);
   i++ ;
}

}

/** 19. Make ten's digit as 1 in two digits number
int main (){
int i,j;
i=0;
while (i<2){
    printf ("enter the two digits number here:");
    scanf("%d", &j);
    printf ("The result is %d \n", (j % 10)+10);
    i++ ;
}
}




















/** 18. Make one's digit 0 in two digits number

int main (){
int i,j;
i =4;
while (i>2){
    printf ("enter num:");
    scanf("%d", &j);
    printf ("answer is : %d \n", j - (j%10));
    i-- ;
}
}






/** 17. Reversing last two digits in 4 digits no.
int main (){
int i , j, j1;
i=0;
while (i<2){
    printf ("enter four digit no. ");
    scanf ("%d",&j);
    j1 = j/100;
    printf ("resulting no. is %d \n ", (j/1000) *100 + (j1 % 10)*1000 + j % 100 );
    i++ ;

}
}


/** 16. reversing two 2nd no. in 4 digit no.
int main (){
int i, j,j1,j2,j3;
i=0;
while (i<2){
printf("enter no. :");
scanf("%d", &j);
j1 = j/100;
j2 = j%100;
j3 = j2 /10;

printf ("The numbers are %d \n", j1*100 +(j%10)*10 + j3);
i++ ;
       }
}


/** /15. reversing three digit no.
int main (){
int i,j,j1,j2;
i =4;
while (i>2){
   printf ("Enter 3 digit no.: ");
   scanf("%d", &j);
   j1 = j%100;
   j2 =  j1/10;
   printf ("The result is : %d \n", 100 * (j%10)+ j/100 +j2 *10);
i-- ;
}

}


/** 14. reverse of the number
int main (){
int i,j,j1,j2;
i=0;
while (i<2){
    printf ("enter no.: ");
    scanf("%d", &j);
    j1 = j/10;
    j2 = j%10;
    printf ("reverse no. is : %d \n", j2 *10 + j1);
    i++ ;

}

}


/** 13. three digits self addition
int main (){
int i,j,j1;
i =0 ;
while (i<2){
    printf ("enter three digit no.: ");
    scanf("%d", &j);
    j1 = j/10;
    j1=j1%10;
    printf ("The self addition is : %d \n",(j/100 + j%10 + j1) );
    i++ ;
}
}

/** 12. two digit self addition
int main (){
int i,j,k,count1, count2 ;
i=0;
count1 =0;
count2 =0;
    while (i<2){
printf("enter the no.: ");
scanf ("%d", &j);
 k=j;
while (k !=0){
k = k/10;
count1 ++ ;
    }
   // if (i=0){
    //printf ("first time count is %d \n", count1);
    //}
    //else (printf ("second time count is %d \n", count2));
printf("The result is %d \n",(j/10 + j%10));
i++ ;
//printf("final i= %d",i);
}
}

/** 11. same but with three digit only entering condition   --- second time couting getting updated instead of overwrite
int main (){
int i,j,j1,k,count;
i=0;
while (i<2){
printf ("enter 3 digit no.: ");
scanf ("%d", &j);
k=j;
while (k !=0){
    k =k /10;
    count ++ ;
}
printf ("count = %d \n", count);
j1 = j/10;
printf ("Ten's digit is : %d \n" , j1%10);
i++ ;
}
}


/**10. ten's digit to be printed and count
int main (){
int i,j,j1,j2,k,count;
i = 0;
while (i<2){
    printf ("enter three digit number: ");
    count =0;
    scanf("%d", &j);
    k=j;
    while (k !=0){
            k = k/10;
        //count =0;
        //printf ("k = %d",k);
        count ++ ;
        //printf ("Count1 = %d \n",count);
    }
    printf ("Count = %d \n",count);
    j1= j/10;
    j2= j1%10;
    printf ("ten's digit is : %d \n", j2);
    i++ ;
}
}



/**int main (){
int i,j,j1;
i = 2;
while(i>0){
    printf ("3 digit no: ");
    scanf("%d",&j);
    int count =0 ;
    int k = j;
    while (k !=0){       //for integer length
        k =k/10;
        count ++ ;
    }
    printf ("count = %d \n", count);
    j1 = j/100;
    printf ("100's digit is : %d \n", j1);
    i--;




/** 9. 100s number and also counting the length of integer
int main (){
int i,j,j1;
i = 2;
while(i>0){
    printf ("3 digit no: ");
    scanf("%d",&j);
    int count =0 ;
    int k = j;
    while (k !=0){       //for integer length
        k =k/10;
        count ++ ;
    }
    printf ("count = %d \n", count);
    j1 = j/100;
    printf ("100's digit is : %d \n", j1);
    i--;
}
}

/** 8. one's digit from 3 digit no.
int main (){
int i,j;
i =2;
while (i>0){
printf ("Provide 3 digit no. :");
scanf("%d", &j);
j = j%10;
printf("one's digit is : %d \n", j);
i--;
}
}

/**7. ten's digit
int main (){
int i,j;
i=0;
while (i<2){
printf ("Enter two digit no.: ");
scanf("%d",&j);
j =j/10;
printf ("The ten's digit is %d \n",j);
i++;
}
}


/** 6. one's digit print
int main (){
int i,j;
i=0;
while (i<2){
        printf ("Enter two digit no. here :");
scanf ("%d", &j);
 j = j%10;
 printf ("one's digit is %d \n",j);
 i = i+1;
}
}

/**5. Same but print remiander instead
int main (){
int i,j;
i=0;
while (i<2){
    printf("Enter no. :");
    scanf("%d", &j);
    printf("result is %d \n", j%8);
    i++;
}
}

//4. same but divide by 6 instead then print quotient
int main (){
int i ,j;
i=0;
while (i<2){
    printf ("Enter no. :");
    scanf("%d",&j);
    printf("The result is %d \n", j/6);
    i++ ;
}

}

/**2. same but subtract 5 instead of addition
int main (){
int i, j;
i=0;
while (i<2){
    printf("Enter the number here: ");
    scanf("%d",&j);
    printf ("Result is : %d \n",j-5);
    i = i+1;
}

}

/**1: Get a number from user and add 2 to that number and print the result.
int main()
{
    int i ,j;
    i =0;
int    m=0;  //when applied loop and goto , it worked more than 2 times unexpectedly
    while (m<2){
    if (m !=0);
    printf("Enter the no. here: ");
    scanf("%d",&i);
    j = i+2;
    printf("result is %d \n", j);
    m= m+1;
    }

    return 0;
}
*/
