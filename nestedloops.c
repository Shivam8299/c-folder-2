// solid rectangle
// # include <stdio.h>
//  int main(){
//      int r;
//      pintf("enter the number : ");
//      scanf("%d",&r);
//      int c;
//      printf("enter the number : ");
//      scanf("%d",&c);
//      for(int i=1; i<=r; i++){
//      for (int j=0; j<c; j++){
//      printf("*");
//      }
//      printf("\n");
//      }
//      return 0;
// }
//                                       print the solid squre patttern;
//  # include <stdio.h>
//  int main(){
//      int n;
//      printf("enter the number : ");
//      scanf("%d",&n);
//      for(int i=1; i<n; i++){
//      for (int j=0; j<n; j++){
//      printf("*");
//      }
//      printf("\n");
//      }
//      return 0;
//  }
//                       print the pattern like this 1 2 3 4 take input from user
//                                                   1 2 3 4
//                                                   1 2 3 4
//                                                   1 2 3 4
//  # include <stdio.h>
//  int main(){
//      int n;
//      printf("enter the number : ");
//      scanf("%d",&n);
//      for(int i=1; i<=n; i++){
//      for (int j=1; j<=n; j++){
//      printf(" %d",j);
//      }
//      printf("\n");
//      }
//      return 0;
//  }
//                          print pattern *
//                                        * *
//                                        * * *
//                                        * * * *
//  # include <stdio.h>
//  int main(){
//      int r;
//      printf("enter the number : ");
//      scanf("%d",&r);
//      for(int i=1; i<=r; i++){
//      for (int j=1; j<=i; j++){
//      printf("*");
//      }
//      printf("\n");
//      }
//      return 0;
//  }
//                                        opposite of upper pattern.
//  # include <stdio.h>
//  int main(){
//      int r;
//      printf("enter the number : ");
//      scanf("%d",&r);
//      for(int i=0; i<=r; i++){
//      for (int j=(r-i); j>0; j--){
//      printf("* ");
//      }
//      printf("\n");
//      }
//      return 0;
//  }
//                           print pattern like this 1
//                                                   1 2
//                                                   1 2 3
//  # include <stdio.h>
//  int main(){
//      int r;
//      printf("enter the number : ");
//      scanf("%d",&r);
//      for(int i=1; i<=r; i++){
//      for (int j=1; j<=i; j++){
//      printf("%d ",j);
//      }
//      printf("\n");
//      }
//      return 0;
// }
//                              print pattern like this 1
//                                                      1 3
//                                                      1 3 5
//  # include <stdio.h>
//  int main(){
//      int r;
//      printf("enter the number : ");
//      scanf("%d",&r);
//      for(int i=1; i<=r; i++){
//      for (int j=1; j<=i+(i-1); j++){
//          if(j%2!=0)
//      printf("%d ",j);
//      }
//      printf("\n");
//      }
//      return 0;
//  }
//                                    print pattern like this A B C D
//                                                            A B C D
//  # include <stdio.h>
//  int main(){
//      int n;
//      printf("enter the number : ");
//      scanf("%d",&n);
//      for(int i=1; i<=n; i++){
//      for (int j=1; j<=n; j++){
//          int x = j+64;
//      printf(" %c",x);
//      }
//      printf("\n");
//      }
//      return 0;
//  }
//                                print like this A
//                                                A B
//                                                A B C
//  # include <stdio.h>
//  int main(){
//      int n;
//      printf("enter the number : ");
//      scanf("%d",&n);
//      for(int i=1; i<=n; i++){
//      for (int j=1; j<=i; j++){
//          int x = j+64;
//      printf(" %c",x);
//      }
//      printf("\n");
//      }
//      return 0;
//  }
//                          print the pattern like this 1
//                                                      A B
//                                                      1 2 3
//                                                      A B C D
//                                                      1 2 3 4 5
//  # include <stdio.h>
//  int main(){
//      int n;
//      printf("enter the number : ");
//      scanf("%d",&n);
//      for(int i=1; i<=n; i++){
//      for (int j=1; j<=i; j++){
//          if(i%2!=0)
//          printf("%d ",j);
//          else{
//          int x = j+64;
//      printf("%c ",x);
//         }
//      }
//      printf("\n");
//      }
//      return 0;
//  }
//                                 print like this.  *
//                                                   *
//                                               * * * * *
//                                                   *
//                                                   *
//  # include <stdio.h>
//  int main(){
//      int n;
//      printf("enter the number : ");
//      scanf("%d",&n);
//      for(int i=1; i<=n; i++){
//          for (int j=1; j<=n; j++){
//           int a= n/2;
//           if(j == (a+1) || i == (a+1))
//                  printf("* ");
//                  else
//                  printf("  ");
//         }
//           printf("\n");
//      }
//      return 0;
//  }
//                                    print cross star pattern.
//  # include <stdio.h>
//  int main(){
//      int n;
//      printf("enter the number : ");
//      scanf("%d",&n);
//      for(int i=1; i<=n; i++){
//          for (int j=1; j<=n; j++){
//           if (i == j || i+j == (n+1))
//                  printf("* ");
//                  else
//                  printf("  ");
//         }
//           printf("\n");
//      }
//      return 0;
//  }
//                              print    1
//                                       2 3
//                                       4 5 6
//  # include <stdio.h>
//  int main(){
//      int n;
//      printf("enter the number : ");
//      scanf("%d",&n);
//      int a = 1;
//      for(int i=1; i<=n; i++){
//          int j = 1;
//          while(j<=i){
//              printf("%d ",a);
//              j++;
//              a++;
//          }
//          printf("\n");
//      }
//      return 0;
//  }
//                                      odd number pattern.
// # include <stdio.h>
//  int main(){
//      int n;
//      printf("enter the number : ");
//      scanf("%d",&n);
//      int a = 1;
//      for(int i=1; i<=n; i++){
//          int j = 1;
//          while(j<=i){
//              printf("%d ",a);
//              j++;
//              a+=2;
//          }
//          printf("\n");
//      }
//      return 0;
//  }
//                                  pattern 0 1 type
//  # include <stdio.h>
//  int main(){
//      int n;
//      printf("enter the number : ");
//      scanf("%d",&n);
//      for(int i=1; i<=n; i++){
//          int j = 1;
//          while(j<=i){
//              if(j%2==0 && i%2!=0)
//              printf("%d ",0);
//              else if(j%2!=0 && i%2==0)
//              printf("%d ",0);
//              else
//              printf("%d ",1);
//              j++;
//          }
//          printf("\n");
//      }
//      return 0;
//  }
//                                         second method
//  # include <stdio.h>
//  int main(){
//      int n;
//      printf("enter the number : ");
//      scanf("%d",&n);
//      for(int i=1; i<=n; i++){
//          int j = 1;
//          while(j<=i){
//          if((j+i)%2==0)
//              printf("%d ",1);
//              else
//              printf("%d ",0);
//              j++;
//          }
//          printf("\n");
//      }
//      return 0;
//  }
//                                                 star trangle
//  # include <stdio.h>
//  int main(){
//      int n;
//      printf("enter the number : ");
//      scanf("%d",&n);
//      for(int i=1; i<=n; i++){
//      for (int j=1; j<=n-i; j++){
//          printf("  ");
//      }
//      for(int k=1; k<=i; k++){
//          printf("* ");
//      }
//          printf("\n");
//      }
//      return 0;
//  }
//                                                        * * * *
//                                                      * * * *
//                                                    * * * *
//                                                  * * * *
//  # include <stdio.h>
//  int main(){
//      int n;
//      printf("enter the number : ");
//      scanf("%d",&n);
//      for(int i=1; i<=n; i++){
//      for (int j=1; j<=n-i; j++){
//          printf("  ");
//          }
//      for(int k=1; k<=n; k++){
//         printf("* ");
//     }

//         printf("\n");
//     }
//     return 0;
// }
//                                                  A
//                                                A B
//                                              A B C
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number : ");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//     for (int j=1; j<=n-i; j++){
//         printf("  ");
//     }
//     for(int k=1; k<=i; k++){
//         int x = (k+64);
//         printf("%c ",x);
//     }

//         printf("\n");
//     }
//     return 0;
// }
//                                                         *
//                                                       * * *
//                                                     * * * * *
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number : ");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//     for (int j=1; j<=n-i; j++){
//         printf("  ");
//     }
//     for(int k=1; k<=i+(i-1); k++){
//         printf("* ");
//     }

//         printf("\n");
//     }
//     return 0;
//}
//                           print it                 1
//                                                  1 2 3
//                                                1 2 3 4 5
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number : ");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//     for (int j=1; j<=n-i; j++){
//         printf("  ");
//     }
//     for(int k=1; k<=i+(i-1); k++){
//         printf("%d ",k);
//     }

//         printf("\n");
//     }
//     return 0;
// }
//                                  print like upper pattern in A B C
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number : ");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//     for (int j=1; j<=n-i; j++){
//         printf("  ");
//     }
//     for(int k=1; k<=i+(i-1); k++){
//         int x = (k+64);
//         printf("%c ",x);
//     }

//         printf("\n");
//     }
//     return 0;
// }
//                                                    1
//                                                  1 2 1
//                                                1 2 3 2 1
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number : ");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//     for (int j=1; j<=n-i; j++){
//         printf("  ");
//     }
//     for(int k=1; k<=i; k++){
//         printf("%d ",k);
//     }
//     for(int l= (i-1); l>=1; l--){
//         printf("%d ",l);
//     }
//         printf("\n");
//     }
//     return 0;
//}
//                                                  *
//                                                * * *
//                                              * * * * *
//                                                * * *                                                                 *
//                                                  *
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number : ");
//     scanf("%d",&n);
//     int a = n/2 +1;
//     int ns = n/2;
//     int nstars = 1;
//     for(int i=1; i<=n; i++){
//     for (int j=1; j<=ns; j++){
//         printf("  ");
//     }
//     for(int k=1; k<=nstars; k++){
//         printf("* ");
//     }
//     if(i<a){
//     ns--;
//     nstars+=2;
//     }
//     else{ ns++;
//     nstars-=2;
//     }
//         printf("\n");
//     }
//     return 0;
// }
//* * * * * * * * *
//* * * *   * * * *
//* * *       * * *
//* *           * *
//*               *
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number : ");
//     scanf("%d",&n);
//     for(int i=1; i<=(n*2)+1; i++){
//     printf("* ");
//     }
//     printf("\n");
//     int nst = n;
//     int nsp= 1;
//     for(int i=1; i<=n; i++){
//     for (int j=1; j<=nst; j++){
//         printf("* ");
//     }
//     for(int k=1; k<=nsp; k++){
//         printf("  ");
//     }
//     for (int l=1; l<=nst; l++){
//         printf("* ");
//     }
//     nst--;
//     nsp+=2;
//     printf("\n");
//     }
//     return 0;
//                                           1 2 3 4 5 6 7 8 9
//                                           1 2 3 4   6 7 8 9
//                                           1 2 3       7 8 9
//                                           1 2           8 9
//                                           1               9
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number : ");
//     scanf("%d",&n);
//     for(int i=1; i<=(n*2)-1; i++){
//     printf("%d ",i);
//     }
//     printf("\n");
//     int number = n;
//     int nsp= 1;
//     int a = (n*2)-1;
//     int b = n+1;
//     for(int i=1; i<n; i++){
//     for (int j=1; j<number; j++){
//         printf("%d ",j);

//     }
//     for(int k=1; k<=nsp; k++){
//         printf("  ");

//     }
//     for (int l=b; l<=a; l++){
//         printf("%d ",a);

//     }
//     number--;
//     nsp+=2;
//     b++;
//     printf("\n");
//     }
//     return 0;
// }
//                        second method          1 2 3 4 5 6 7
//                                               1 2 3   5 6 7
//                                               1 2       6 7
//                                               1           7
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number : ");
//     scanf("%d",&n);
//     for(int i=1; i<=(n*2)-1; i++){
//     printf("%d ",i);
//     }
//     printf("\n");
//     int number = n;
//     int nsp= 1;
//     for(int i=1; i<n; i++){
//         int a = 1;
//     for (int j=1; j<number; j++){
//         printf("%d ",a);
//         a++;
//     }
//     for(int k=1; k<=nsp; k++){
//         printf("  ");
//         a++;
//     }
//     for (int l=1; l<number; l++){
//         printf("%d ",a);
//         a++;
//     }
//     number--;
//     nsp+=2;
//     printf("\n");
//     }
//     return 0;
// }
//                                                 A B C D E F G
//                                                 A B C   E F G
//                                                 A B       F G
//                                                 A           G
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number : ");
//     scanf("%d",&n);
//     int b = 1+64;
//     for(int i=1; i<=(n*2)-1; i++){
//     printf("%c ",b);
//     b++;
//     }
//     printf("\n");
//     int number = n;
//     int nsp= 1;
//     for(int i=1; i<n; i++){
//         int a = 1+64;
//     for (int j=1; j<number; j++){
//         printf("%c ",a);
//         a++;
//     }
//     for(int k=1; k<=nsp; k++){
//         printf("  ");
//         a++;
//     }
//     for (int l=1; l<number; l++){
//         printf("%c ",a);
//         a++;
//     }
//     number--;
//     nsp+=2;
//     printf("\n");
//     }
//     return 0;
// }
//                                              1 2 3 4 3 2 1
//                                              1 2 3   3 2 1
//                                              1 2       2 1
//                                              1           1
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number : ");
//     scanf("%d",&n);
//      int number = n;
//      for(int i = 1; i<=n; i++){
//      printf("%d ",i);
//     }
//     for (int i = n-1; i>=1; i--){
//         printf("%d ",i);
//     }
//     printf("\n");
//     int nsp= 1;
//     int x = n-1;
//     for(int i=1; i<n; i++){
//     for (int j=1; j<number; j++){
//         printf("%d ",j);
//     }
//     for(int k=1; k<=nsp; k++){
//         printf("  ");
//     }
//     for (int l=x; l>=1; l--){
//         printf("%d ",l);
//     }
//     number--;
//     nsp+=2;
//     x--;
//     printf("\n");
//     }
//     return 0;
// }
//                                 pascal trangle.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the value of number :");
//     scanf("%d",&n);
//     for(int i =0; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//              printf(" ");
//         }
//         int first = 1;
//         for(int j = 0; j<=i; j++){
//             printf("%d ",first);
//             first = first*(i-j)/(j+1);
//         }
//         printf("\n");
//     }
//     return 0;
// }
//                                          DIMOND PATTERN.
// # include <stdio.h>
// int main(){
//     int n;
// printf("enter the number : ");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//         printf(" ");
//     }
//     for(int k=1; k<=i; k++){
//         printf("* ");
//     }
//     printf("\n");
//     }
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//         printf(" ");
//     }
//     for(int k=1; k<=n-i; k++){
//         printf("* ");
//     }
//     printf("\n");
//     }
//     return 0;
// }
//                                   zigzag pattern infinite.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the value of n :");
//     scanf("%d",&n);
//     int a = 1;
//     while(a>0){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//         printf(" ");
//         }
//         for(int k=1; k<=n; k++){
//             printf("* ");
//         }
//     printf("\n");
//     }
//     for(int i=1; i<=n; i++){
//         for(int j=n-i; j>0; j--){
//         printf(" ");
//         }
//         for(int k=1; k<=n; k++){
//             printf("* ");
//         }
//     printf("\n");
//     }
//     a++;
//     }
//     return 0;
// }
//                                            SNAKE pattern.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the value of tne n :");
//     scanf("%d",&n);
//     int b = 1;
//      for(int i=1; i<=n; i++){
//       if(i%2!=0){
//         for(int j=b; j<=n*i; j++){
//         printf("%d ",j);
//         }
//         }
//         else if(i%2==0){
//             for(int j=n*i; j>=b; j--){
//                 printf("%d ",j);
//             }
//         }
//        printf("\n");
//        b+=n;
//     }
//     return 0;
// }
//                                     dangerous pattern.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the lines :");
//     scanf("%d",&n);
//     int min = 0;
//     for(int i=1; i<=(n*2)-1 ; i++){
//         for(int j=1; j<=(n*2)-1; j++){
//             int x = i;
//             if(x>n) x=2*n-i;
//             int y = j;
//             if(y>n) y=2*n-j;
//         if (x>y)
//             min = y;
//         else min = x;
//         int z = (n+1)-min;
//         printf("%d ",z);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int n;
//     printf("enter the value of the n :");
//     scanf("%d", &n);
//     for (int i=1; i<=n; i++){
//         if(i==1|| i==n){
//             for(int j=1; j<=n; J++){
//                 printf("* ");
//             }
//         }
//         for(int k=1; k<=n; k++){
//             if(k==1 || k==n){
//                 printf("*");
//             }
//             else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

