#include <stdio.h>
#include <stdlib.h>

//
// C program to find LCM of
// two numbers
//#include <stdio.h>

// Driver code
int main()
{
    int x = 15, y = 25, max;
    max = (x > y) ? x : y;

    // While loop to check if max variable
    // is divisible by x and y
    while (1) {
        if (max % x == 0 && max % y == 0){
        //    if (max % x = 0 ){
        //printf ("%d ", max );
            printf("The LCM of %d and %d is %d.",x, y,
                   max);
            break;
       }

        ++max;
    }

    return 0;
}













//other function can not be defined inside main function.
//if function is small but function overhead is large then use inline.
// if a function has to call in main function, it'll take variables defined in main function as argument. so use return at the end of function.















/** / Count of numbers < 100000 whose self addition is 14.
int main(){
int i,k;

//i=25;

for (i =1;i<70;i++){    //for 1 to 12
//Sum (i);
if (Sum(i) == 14){
            k++;
            //printf ("%d",i);
        }
    //k = k+ i%10;
//printf ("value of j is %d \n",j);
}
printf ("%d",k);
}

inline Sum(int n){
    int j =0;
while (n > 0){    //for self addition of single i

    j = j + n%10;
            //printf ("value of i1 is                     %d \n,",i);
            n=n/10;
            //printf ("value of i2 is %d \n,",j);
}
return j;
}




























/** / biggest four digit no. divisible by 7 and 9
int main (){
int i,j ,k;
for (i=9999;i>1000;i--){
    j = i%63;
    if (j == 0){
        break;
    }
}
printf ("The number is %d", i);
}

























/** bigg/count of single digit prime number from user input
int main (){
int i,j,k,count;
printf ("enter the number ");
scanf("%d", &i);
int i1=i;
while (i1 !=0){
        int i2 = i1%10;
if ((i2 == 2 ) || (i2 ==3) || (i2 ==5) || (i2 ==7)){
    count ++;
}
 i1=i1/10;

}
printf ("The count is %d", count);
}

















/** / count of 2 digits perfect sq. from user inputs
int main (){
int i,j,k1,k2,k3,l1,l2,l3,s,count;
printf ("enter the number ");
scanf("%d",&i);
j=i;
count =0;
while (j%10 != 0){                 //will fail when 0 is present in between user input so put j<0
    k1= j%10;
    k2 = (j%100)/10;
    k3= (j%1000)/100;
    l1 = k2 *10 +k1;
    l2 = k3 *10 + k2;
   // printf ("k1, k2, k3, l1, l2 are %d %d %d %d %d \n",k1,k2,k3,l1,l2);
    for (s=4;s<10;s++){
        if (((s*s == l1) || (s*s== l2)) && (l3 != l2)){
            count ++;
            l3 = l1;
            //printf ("l3 is %d",l3);
        }
    }
    j =j/100;
}
printf ("The count is %d", count);
}
























/** / count of 2 digits perfect sq. -- working when sequentially perfect sq. is written and 0 is not in user input
int main (){
int i,j,k,k1,k2,s, sr,l,count;
printf ("Enter the number ");
scanf("%d",&i);
j=i;
while (j%10 !=0){
        printf ("j is %d \n",j);
    k1 = j%100;
    //sr = (int ) sqrt (k1);
    for (s=4;s<10;s++){
//printf ("sr is %d",sr);
    if (s*s == k1){
        count ++ ;
        break;
    }
    }
    k2 = j%100;
    j =j/100;
}
printf ("count is %d",count);


}

























/** / Count of single digit perfect sq. number from user input
int main (){
int i,j,k;
printf ("enter the number ");
scanf("%d", &i);
j=i;
while (j%10 !=0){
        if (j%10 == 4 || j%10 == 9 || j%10 == 1){
            k++ ;
        }
//printf ("sq. root value is %i \n", k);
    j=j/10;
}
printf ("sq. root value is %i \n", k);
}






























/** /22. count  of odd no. from user input
int main (){
    int i,j,k,l;
    k=0;
printf ("Enter the number ");
scanf ("%d", &i);
j=i;
//printf ("j is %d \n",j);
while (j/10 > 0){
       // printf ("while1 \n");
if ((j%100)%2 == 1){
    k++;
}
 j =j/10;
//printf ("while2 \n");
}
printf ("value of k is %d",k);
}



/** /21. count total odd no. from user input no.

int main (){
int i,j,k;
printf ("Enter the number ");
scanf("%d",&i);
j =i;
k=0;
while ((j/10) != 0){
    if (j %2 ==1){
        k++;
        j=j/10;
        //printf ("for \n");
    }
    if (j %2 ==0){
        j =j/10;
        //printf ("unfor \n");
    }
    if (j<10 && j%2 ==1){
        k++;
    }
    //printf("while \n");
}
printf ("count is %d", k);
}




/** /20. count of single digit prime numbers
int main (){
int l,i,j,k,l2;
k=0;
l2 = (int) sqrt (l);
for (l=2;l<10;l++){
    for (i=2;i<l;i++){
    //printf ("sq.root is %d",l2);
        j = l%i;
    //printf ("sq.root is %d",l2);
        if (j ==0){
            k++ ;
        break;
           // printf ("value of k is %d \n",k);
        }

    }
    //printf ("sq.root is %d \n",l);
   printf ("value of k is %d \n",k);
}
//printf ("value of k is %d",k);


}



// for n<4, n/2 > sqrt (n)
// for n>4, sqrt(n)> n/2

// user input k sath while jyada ache se work krta h kyuni for k liye total digit count krne padte hai




















/** /19. middle two numbers are prime or not
int main (){
int i,j,k,c,n;
printf ("Enter 4 digits number ");
scanf ("%d",&i);
j = (i/10)%100;
k = (int ) sqrt (j);
printf ("j is %d \n",j);
n = j;
for (c=2;c<k;c++){
 n   = j%c ;
 if (n==0){
    break ;
 }

}
if (n == 0){
    printf ("It's not prime");
}
else printf ("It's prime");
}



/** /18.first and second digits combo are prime or not
int main (){
int i,j,k,c,l;
printf ("enter the number here ");
scanf("%d", &i);
j = i%100;
printf ("j value is %d \n",j);
k = (int) sqrt (j);
printf ("The value of k is %d \n",k);
int m = j;
for (c =2; c<k;c ++){
    l = m%c;
    if (l==0){
        break;
    }
}
printf ("value of l is %d \n",l);
if (l !=0){
    printf ("The number is prime");
}
else
    printf("The number is not prime");
}

























/** /17. prime and self addition is 14 -- not worked on 59
int main (){
int i,j,k,l,num,t;
printf("Enter the number ");
scanf ("%d", &i);
k = (int)sqrt(i);
for (j=2;j<=k;j++){
    l = i%j;
    if (l ==0){
        break;
    }
}
if (l) {
    printf ("It's prime \n");

}
else printf ("It's not prime \n");

//self addition
int count,m;
count =0;
m = i;
while (m != 0){
    m =m/10;
    count++ ;
}
printf ("count is %d\n", count);
t=i;
int n =0;
for (num=0;num<count;num ++){
n = n+t%10;
t=t/10;
}
printf ("addition is %d \n", n);

if ((l ==0) && (n == 14)){
    printf ("It's not prime but addition is 14");
}
if ((l==1) || (n != 14)){
    printf ("It's prime but addition is not 14");
}
if (( l==1 ) && (n==14)){
    ("it's prime and addition is 14");
}
if ((l ==0)&& (n != 14)){
    printf ("It's neither prime nor addition is 14");
}
}






















/** /16. user input is prime or not

int main (){
    int i,s;
    int j,p;
printf ("enter the number ");
scanf ("%d", &i);
s = (int ) sqrt(i);
//printf("s value is %d \n",s);
for (j=2;j<=s;j++){
    p = i%j;
    //printf("%d \n",p);
if (p ==0 ){
//if (i != 2 || i !=3 ){
    //printf ("It's prime \n");
    break;
}
}
if (p){
    printf ("It's prime");
}
else printf ("It's not prime \n");
//printf ("%d", (int) sqrt(36));

}









/** /15. take user input and subtract 1 if MSB is odd

int main (){
int i,j,k,m;
k=0;
printf ("Enter the number ");
scanf ("%d", &i);
j =i;
while (j != 0){
    j=j/10;
    k++ ;
}
printf ("count is %d \n",k);

m = i/ ((int) pow (10,k-1));
int n = i % ((int) pow (10,k-1));
printf ("m is %d \n" ,m);
if (m%2 ==1){
    printf ("%d",(m-1)* ((int) pow (10,k-1)) + n);

}
else printf ("%d",i);
}






























/** /14. taking number and interchanging first and last digits

int main (){
int i,j,count,k,n,l,m,p;
count =0;
n=0;
printf ("Enter the number ");
scanf("%d", &i);
//printf ("%d \n",i);
j = i;
while (j !=0){
        j =j/10;
    count++ ;
    //printf ("count is %d", count);
}
printf ("count is %d \n", count);
int r = (i%10) * ((int) pow (10,count-1)); // last number
int s = i% ((int)pow (10, count -1));
int s1 = s/10;
int s2 = i / ((int)pow (10, count -1));
printf ("The new number is %d \n", r +  s1 * 10 + s2 );
/** reversed number and first and last value also interchanged
for (k=0;k<count;k++){
        l=i%10;
    n = n * 10 + l;
    i=i/10;

}
printf ("new number is %d \n", n);
m =n/ ((int)(pow(10,(count-1))));
printf ("%d",m);
p = n%10;
printf ("%d",p* (int)(pow(10, count-1)) + n%((int)(pow(10,(count-1)))) + m);
//printf ("%d", (int) (pow(10,3)));
//printf ("new number's last digit is %d",n/ ((int)(pow(10,(count-1)))));
//p =n %10;
*/
//}

































/** /13. Reversing no. given by user
int main(){
    int i,count,k,new,l ;
    new=0;
printf("enter the number ");
scanf("%d",&i);
int j=i;
while (j !=0){
    j=j/10;
    count ++ ;
}
printf ("count is %d \n", count);

for (k=0;k<count;k++){
    new = new *10 + (i%10);
 i=i/10;
//printf ("1 %d \n",new);
}
    printf ("%d \n",new);
}











































/** /12. printing addition of total digits given by user
int main (){
int i,count,sum;
sum =0;
scanf("%d",&i);
int j=i;
while (j !=0){
        int k = j%10;
    j=j/10;
    count++ ;
//printf ("%d \n", count);
sum = sum + k;
//printf ("%d",sum);
}
printf ("%d",sum);
}


























/** /11. print length of user number
int main (){
int i,j;
int count =0;
printf("Enter the number ");
scanf("%d", &i);
//printf ("%d \n",i);
j=i;
//j=i/10;
while (j!=0){
        j =j/10;
count++;
//printf ("%d \n", count);
}


printf ("%d", count);
}


























/** /10. print sum of two digit odd no. having 7 as ten's digit
int main (){
int i,j,sum;
i=7;
for (j=0;j<10;j++){
        if (j%2==1){
    sum = sum + 10*i +j;
        }
}
printf ("%d", sum);
}



/** /9. print sum of all two digit no. ending with 5
int main (){
int i,sum;
int j=5;
for (i=1;i<10;i++){
   sum = sum + 10*i +j;
}
printf ("%d \n",sum);
}


/** /8. print two digit even number whose sum is 6
int main (){
    int i,j,k;
for (i=1; i<10; i++){
    for (j=0;j<10;j++){
        if ((i+j)%2 == 0 && (i+j ==6)){  //for showing all two digits no. whose addition is 6
        k=10*i +j;
        if (k%2==0){
         printf ("%d %d %d\n",i,j,k );
    }
    }}
}
}



/** /7. print two digit odd no. whose sum is 7
int main (){
int x=1;
int i=0;
int j=0;
int k;

for (i=1;i<10;i++){
    for (j=0;j<10;j++){
        if (((i+j)%2 == 1) & (i+j ==7)){
            // printf ("%d \n", 10*i +j);
            k = 10*i +j;
            if (k%2 ==1){
            printf ("%d \n",k);
        }
        }
    }
}
}



/** /6. Print b/w 11 and 20
int main (){
int i,x;
x=0;
loop: if ((x<5)){
printf("%d \n", 10+ (2*(x)+1));
x++;
goto loop;
}
}


























/** /5. print odd number 1 to 9
int main (){
int x =0;
//loop: if(x<10){
//    if(x<5){
//    printf ("%d \n",2 * x+1);
//    x++ ;}
//    goto loop;
while(x<5){
    printf ("%d \n", 2 * x+1);
    x++ ;
}
}



























/** /4. print sum of 6 to 1
int main (){
int i, x,y1,y2,y3,y4,y5,y6,sum;
int y []= {y1,y2,y3,y4,y5,y6};
x=7;
i=0;
while (x>0){
    y[i]=x;
    y[i+1] = y[i]-1;
    i++;
    x-- ;
   sum = sum +y[i] ;
}
printf ("The sum is %d", sum);

}



/** /3. loop program to sum of 1 to 5 --had to be done by loop program  --- can be done by array and while loop
int main (){
int x, i,y1,y2,y3,y4,y5;
x=0;
int y[]= {y1,y2,y3,y4,y5};
i=1;
int sum =0;
while (x<6){
y[i]=x;
y[i+1]=y[i];
i++;
x++ ;
//printf("%d %d \n",y[1],y[2],y[3],y[4],y[5]);
//printf("%d %d %d %d %d \n",y[1],y[2],y[3],y[4],y[5]);
sum = sum +y[i];
}
printf ("sum is %d", sum);

}









/** /2. same but reverse number printing
int main (){
int x;
x=5;
loop: if(x>0){
    printf("%d \n", x);
    x-- ;
    goto loop;
}
}
























/** / 1. Print 1 to 5 in new lines
int main (){
int x;
x=1;
loop: if(x<6){
printf ("%d \n",x);
x++;
goto loop;

}
}
*/
