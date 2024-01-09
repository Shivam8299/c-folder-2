//#include<stdio.h>
//int main(){
    // int age;
    // printf("enter the age ");
    // scanf("%d", &age);
    // if (age>=18){
    //     printf("young \n");
    //     printf("the can drive\n");
    //     printf("the can vote\n");
    // }
    // else{
    //     printf("not adult\n");
    // } 
    //question 2
// int age;
// printf("enter the age :");
// scanf("%d",&age);
// if(age>15 && age<20){
//     printf("teenagers\n");
// }  
// else if (age<18){
//     printf("adult\n");
// }
// else {
//     printf("child\n");

// } 
// return 0;
// }
// Question 3
// int age;
// printf("enter the age");
// scanf("%d",&age);
// age >= 15 ? printf("shivam\n") : printf("mishra\n");
// return 0;
// }
//use of conditional operator & switch
// char days;
// printf("enter the day:");
// scanf("%c",&days);
// switch(days){
//     case '1' : printf("monday\n");
//             break;
//       case '2' : printf("tuesday\n");
//             break;
//       case '3' : printf("wednesday\n");
//             break;
//       case '4' : printf("thursday\n");
//             break;
//       case '5' : printf("fryday\n");
//             break;
//       case '6' : printf("saterday\n");
//             break;
//       case '7' : printf("sunday\n");
//             break;
//       default : printf("invalid\n");
// }
// return 0;
//use of the nested if ilse
//int number;
// printf("enter the number :");
// scanf("%d", &number);
// if (number>=0){
// printf("positive number\n");
// if (number%2==0){
//     printf("even number\n");
// }
// }else{
// printf("negative number\n");
// }
// return 0;
// }
// write a program to check a student is pass or fail
// int number;
// printf("enter the number 1-100 :");
// scanf("%d"int,&number);
// if(number>=30){
//     printf("pass\n");
// }else if (number>=80 && number<=100){
//     printf("gread A\n");
// }
// else
//     printf("fail\n");
//     return 0;
//}
// write a program to give grade to the student.
// int number;
// printf("enter the no. : ");
// scanf("%d", &number);
// if (number<30){
//     printf("grade F\n");
// }
// else if(number>=30 && number<=80){
//     printf("grade B\n");
// }
// else if(number>=80 && number<=90){
//     printf("grade A\n");int
// }
// else if(number>=90 && number<=100){
//     printf("grade A+\n");
// }
// else{
//     printf("INVALIDE\n");
// }
// return 0;
// }
// write a program to check uper case and lover case
// char ch;
// printf("enter the no. : ");
// scanf("%c", &ch);
// if (ch >= 'A' && ch <= 'Z'){
//     printf("uper case\n");
// }
//     else if (ch >= 'a' && ch <= 'z'){
//         printf("lover case\n");

//     }
//     else printf("not english letter\n");
//     return 0;
// }
// for loops
// for( int i = 1; i <= 10; i++){
//     printf("%d\n" , i);
// }
// return 0;
// }
// while lops ( print no.1 to n)
//  int n;
//   printf("ener the number :");
// scanf("%d", &n);
//  int i =1;
// while (i <= n);{
// printf("%d\n", i);
//  i++;
//  }
//  return 0;
//  }
// write a program to print the odd no. from 5 to 50; and take input from the user.
//int n = 50;
// ;printf("enter the number :");
// scanf("%d", &n)
//int i =5
// while (i <= n){
// printf("%d\n", i);
// i+=2;
//}
//return 0;
//}
                                               //print any table
// int n;
// printf("enter the number :");
// scanf("%d", &n);

// for (int i=1; i<=10; i++){
//     printf("%d\n", i*n);
   
// }
// return 0;
// }
                                            // factorization
// int n;
// printf("enter the no. :");
// scanf("%d", &n);
// int fact = 1;
// for (int i = 1; i <= n; i++) {
//     fact = fact * i;
// }
//     printf("final factorial is %d\n", fact);

// return 0;
// }
//                          revers order table
// int n;
// printf("enter the number :");
// scanf("%d", &n);
// for (int i = 10; i >= 1; i--) {
//      printf("%d\n", i * n);
//     }
//     return 0;
// }
//                             print sum of all the no. from 5 to 50 
// int sum = 0;
// for (int i = 5; i <= 50; i++){
//     sum = sum + i;
// }
// printf("sum is %d\n", sum);
// return 0;
// }
//       write a program to take the two no. from the user and print their average.
// int n;
// printf ("enter the no. : ");
// scanf ("%d", &n);
// int m;
// printf ("enter the no. : ");
// scanf ("%d", &m);
// int average = (n + m) / 2;
// printf ("the average is %d\n", average);
// return 0;
// }
//                       write a program to print leap year or not.
// int n;
// printf("enter the year :");
// scanf("%d", &n);
// if (n % 4 == 0 && n % 100!= 0 || n % 400 == 0){
//     printf("leap year\n");
// }
// else{
//     printf("not leap year\n");
// }
// return 0;
// }
                                         //marks code
// # include <stdio.h>
// int main(){
// int marks;
// printf ("enter the number marks :");
// scanf ("%d", &marks);
// if( marks > 90 && marks <= 100)
//     printf("excellent\n");
//     else if(marks > 80 && marks <= 90)
//     printf("very good\n");
//     else if(marks > 70 && marks <= 80)
//     printf("you can do better\n");
//     else if(marks > 60 && marks <= 70)
//     printf("average\n");
//     else if(marks > 40 && marks <= 60)
//     printf("pass\n");
//     else printf("fail\n");
//     return 0;
// }
//                    is & passsword
// # include <stdio.h>
// int main(){
//     char username;
//     int password;
//     printf("enter the username :");
//     scanf("%c", & username);
//     if (username == 'a'){
//         printf("enter the password :");
//         scanf("%d", &password);
//     if (password == 123){
//             printf("Welcome\n");}
//     else {
//             printf("enter correct password\n");
//         }
//     }
    
//     else{
//             printf("incorrect user name\n");
//         }
//             return 0;
//}
    
//              write a progrsm to check if all points lies in one line or not
// # include <stdio.h>
// int main(){
//     int x1, x2, y1, y2, x3, y3;
//        printf("enter the value : ");
//         scanf("%d", &x1);
//         scanf("%d", &y1);
//         scanf("%d", &x2);
//         scanf("%d", &y2);
//         scanf("%d", &x3);
//         scanf("%d", &y3);
//     double m1 = (y2-y1) / (x2-x1);
//     double m2 = (y3-y1) / (x3-x1);
//     if (m1 == m2){
//         printf("one straight line\n");
//     }
//     else {printf("not one straight line/n");
//     }
//     return 0;
// }
//                             WAP to print the max of given 3 numbers.
// # include <stdio.h>
// int main(){
//     int a;
//     printf("enter the number :");
//     scanf("%d", &a);
//     int b;
//     printf("enter the number :");
//     scanf("%d", &b);
//     int c;
//     printf("enter the number :");
//     scanf("%d", &c);
//     int max = 0;
//     if(a>b){
//         max = a;
//     }
//     if(b>a){
//         max = b;
//     }
//     if(max<c){
//         max = c;
//     }
//     if(max>c){
//         max = max;
//     }
//     printf("max is %d\n", max);
//     return 0;
// }
//                               WAP TO PRINT THE SECOND MAX OF GIVEN THREE INPUTS
// # include <stdio.h>
// int main(){
//     int a;
//     printf("enter the number :");
//     scanf("%d", &a);
//     int b;
//     printf("enter the number :");
//     scanf("%d", &b);
//     int c;
//     printf("enter the number :");
//     scanf("%d", &c);
//     int max = 0;
//     int second_max = 0;
//     if(a>b && a>c && b>c){
//         max = a;
//         second_max = b;}
//         if(a>b && a>c && c>b){
//             max = a;
//             second_max = c;
//             }
//     else if(b>a && b>c && c>a){
//         max = b;
//         second_max = c;}
//         if(b>a && b>c && a>c){
//             max = b;
//             second_max = a;
//         }
//     else if(c>a && c>b && b>a){
//         max = c;
//         second_max = b;}
//         if(c>a && c>b && a>b){
//             max = c;
//             second_max = a;
//         }
//      printf("maxium: %d", max);
//      printf("second maxium: %d", second_max);
//      return 0;
// }
//                         WAP to print the max of given 5 inputs
// # include <stdio.h>
// int main(){
//     int a,b,c,d,e;
//     printf("enter the number :");
//     scanf("%d\n%d\n%d\n%d\n%d", &a,&b,&c,&d,&e);
//     int max = 0;
//     if(a==b && c==d && e>a)
//         max = e;
//     else if(a==b && b==c && d>c && a==e)
//         max = d;
//     else if(a==b && b==d && c>d && a==e)
//         max = c;
//     else if(a==c && c==d && e==a && b>a)
//          max = b;
//     else if(b==c && c==d && e==b && a>b)   
//           max = a;
//     if(a>b && a>c && a>d && a>e)
//         max = a;
//     if(b>a && b>c && b>d && b>e)
//         max = b;
//     if(c>a && c>b && c>d && c>e)
//         max = c;
//     if(d>a && d>b && d>c && d>e)
//         max = d;
//     if(e>a && e>b && e>c && e>d)
//         max = e;
//     printf("maxium: %d", max);
//     return 0;
// }
//                                             bonus.
// # include <stdio.h>
// int main (){
//     int year;
//     printf ("enter the no. of years :");
//     scanf("%d",&year);
//     if(year>5){
//         int salery;
//         printf ("enter your salery :");
//         scanf("%d",&salery);
//         int bonus = ((5*salary)/100);
//         printf("%d",bonus);
//     }else {
//         printf("you have to spend more time with our compuny for get bonus\n");
//     }
// }
//            max and smax
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     scanf("%d%d%d",&a,&b,&c);
//     int max=0;
//     int smax=0;
//     if(a>b){
//         if(b>c){
//         max=a;
//         smax=b;
//         }
//     }
//     if(b>a){
//         if(c>b){
//          max=c;
//          smax=b; 
//         }
//     }
//       if(a<c){
//         if(b>a){
//             if(c>b){
//             smax=b;
//             max=c;
//             }
//         }
        
//     }
//     printf("value of max is %d\n",max);
//     printf("value of smax is %d\n",smax);
//     return 0;
// }