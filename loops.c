//                       table from 5 to 10
// # include <stdio.h>
// int main (){
//     for (int i = 5; i<=10 ; i++)
//     for (int j = 1; j<=10 ; j++)
//     printf("%d\n",i*j);
//     return 0;
// }
// print AP 1, 3, 9, 27, 81....up to n terms.
// # include <stdio.h>
// int main (){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     int a = 1;
//     for (int i=1; i<n; i++){
//         printf("%d ",a);
//         a+= a*2;

//     }
//     return 0;
// }
//                     print GP 1, 2, 4, 8, 16, 32, 64, 128 up to n;
// # include <stdio.h>
// int main (){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     int a = 1;
//     for (int i=1; i<n; i++){
//         printf("%d ",a);
//         a = a*2;

//     }
//     return 0;
// }
//                         3, 12, 48, print up to n terms.
// # include <stdio.h>
// int main (){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     int a = 3;
//     for (int i=1; i<n; i++){
//         printf("%d ",a);
//         a = a*4;
//     }
//     return 0;
// }
//                      100, 97, 94, 91, print all the positive terms
// # include <stdio.h>
// int main (){
//     for (int i=100; i>=0; i-=3){
//         printf("%d ",i);
//         }
//     return 0;
// }
//                                                         prime no. or not
// # include <stdio.h>
// int main (){
//     int n;
//     printf ("enter the number :" );
//     scanf ("%d",&n);
//     int a = 0;
//     for ( int i=2; i<=(n/2); i++ )
//     if (n%i==0){
//         a = 1;
//         break;
//     } 
// if (a == 0){
//     printf("this number is prime\n");
// } else printf ("this number is not prime\n");
//     return 0;
// }
                      //print the n even no. with use of continue
// # include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the number");
//     scanf ("%d",&n);
//     for(int a= 1; a<=n; a++)
//     {
//         if(a%2!=0)
//         {
//         continue;
//         }
//     printf("%d\n",a);
//     }
//     return 0;
// }
//                              WAP to check digites of given no.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     int count = 0;
//     while(n>0){
//         n=n/10;
//         count++;
//     }
//     printf("digites of this no.is %d\n",count);
//     return 0;
// }
//                          WAP print sum of the digites of given no.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     int sum = 0;
//     int lastdigite = 0;
//     while(n>0){
//         lastdigite=n%10;
//         sum=sum+lastdigite;
//         n=n/10;
//     }
//     printf("sum of the digites of this no. is %d\n",sum);
//     return 0;
// }
//                   WAP to print the sum of all the even no digites of given no.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     int sum = 0;
//     int lastdigite = 0;
//     while(n>0){
//         lastdigite=n%10;
//         if(lastdigite%2==0){
//             sum=sum+lastdigite;
//             n = n/10;
//         }if (lastdigite%2!=0)
//         n = n/10;
//     }
//     printf("sum of the all even digites of this no. is %d\n",sum);
    
//     return 0;
// }
//                              WAP TO PRINT THE REVERSE of given no.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     int r = 0;
//     while(n>0){
//         r = r*10;
//         r = r + (n%10);
//         n = n/10;
//     }
//     printf("reverse of this no. is %d\n",r);

//     return 0;
// }
//                          WAP to print the sum of given no. and its reverse
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     int r = 0;
//     int sum = 0;
//     int a = n; 
//     while(n>0){
//         r = r*10;
//         r = r + (n%10);
//         n = n/10;
//     }
//      sum = a + r; 
//      printf("its revers = %d\n", r);  
//     printf("the sum of given number %d\n",sum);
//     return 0;
// }
//                   print the sum of this series 1, -2, +3, -4...up to n term
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     int sum = 0;
//     for (int i=1; i<=n; i++){
//         if (i%2!=0)
//         sum = sum + i;
//         else sum = sum - i;
//     }
//     printf("the sum is %d\n", sum);
//     return 0;
// }
//                                second method of same question.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     int sum = 0;
//     if (n%2==0){
//         sum = -n/2;
//     }else{
//         sum = -n/2 + n;
//     }
//     printf("the sum is %d\n", sum);
//     return 0;
// }
//                       factorial of the given no.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact = fact*i;
//     }
//     printf("factorial of this no. is %d\n",fact);
//     return 0;
// }
//                    print the factorial of given n numbers with nested loops.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     int i = 1;
//     while(i <= n){
//         int fact = 1;
//         for(int j=1; j<=i; j++){
//         fact = fact*j;
//     }
//     printf("factorial of this no. is %d\n",fact);
//     i++;
//     }
//     return 0;
// }
//                print the factorial of given number no. without nested loops
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact = fact*i;
//     printf("factorial of this no.%d is %d\n",i,fact);
//     }
//     return 0;
// }
//                 WAP to print fabonacci series.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     int a = 0;
//     int b = 1;
//     int sum = 0;
//     for(int i=1; i<=n; i++){
//         sum = a+b;
//         a = b;
//         b = sum;
        
//         printf(" %d", a);
//     }
//     return 0;
// }
//                                               flore releted question.
// # include <stdio.h>
// int main(){
//     int n1;
//     printf("enter the no :");
//     scanf("%d",&n1);
//     int n2;
//     printf("enter the no :");
//     scanf("%d",&n2);
//     if(n1>n2){
//     int c=n1-n2;
//     int k= c/10;
//     printf("%d",k);
//     }
//     else{
//     int c=n2-n1;
//     int k= c/10;
//     printf("%d",k);
//     }
//     return 0;
// }
//                     WAP to print the max 0f n numbers by using loops.
// # include <stdio.h>
// int main (){
//     int n;
//     printf("enter the value of n :");
//     scanf("%d",&n);
//     int max =0;
//     int el;
//     for(int i=0; i<n; i++){
//         scanf("%d",&el);
//         if (el>max){
//             max = el;
//         }
//     }
//     printf("%d\n",max);
//     return 0;
// }
//       WAP to print the N number of even numbers.
// # include <stdio.h>
// int main (){
//     int x;
//     printf("enter the value of x :");
//     scanf("%d",&x);
//     int j = 2; 
//     int i=0; 
//     while(i<x){
//         printf("%d ",j);
//         i++;
//         j+=2;
//     }
//     return 0;
// }
#include <stdio.h>

int main(){
int n;
scanf("%d",&n);
int i=1;
while (i<=n){
    scanf("%d",&n);
    int k=1000;
    int p= n*24*(k);
    printf("%d\n",p);
    i++;
}
	return 0;
}