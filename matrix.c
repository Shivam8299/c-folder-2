// take input from user and print.
// # include <stdio.h>
// int main(){
//     int r;
//     printf("enter the number of rows :");
//     scanf("%d",&r);
//     int c;
//     printf("enter the number of columns :");
//     scanf("%d",&c);
//     int arr[r][c];
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("\n");
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
//                              store marks of students.
// # include <stdio.h>
// int main(){
//     int r;
//     printf("enter the number of students :");
//     scanf("%d",&r);
//     int c;
//     printf("enter the number marks of subjects :");
//     scanf("%d",&c);
//     int arr[r][c];
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("\n");
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
//                                           WAP TO STORE 10 AT EVERY INDEX.
// # include <stdio.h>
// int main(){
//     int r;
//     printf("enter the number of rows :");
//     scanf("%d",&r);
//     int c;
//     printf("enter the number marks of columns :");
//     scanf("%d",&c);
//     int arr[r][c];
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("\n");
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
//                         WAP to add to matrix.
// # include <stdio.h>
// int main(){
//     int arr[2][2] = {1,2,3,4,};
//     int brr[2][2] = {1,2,3,4,};
//     int res[2][2];
//     for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//          res[i][j] =arr[i][j]+brr[i][j];
//         }
//     }
//     for(int i=0; i<2; i++){
//          for(int j=0; j<2; j++){
//             printf("%d ",res[i][j]);
//         }
//         printf("\n");
//     } 
//     return 0;
// }
//                                 sum of all elements.
// # include <stdio.h>
// int main(){
//     int r;
//     printf("enter the no. of rows :");
//     scanf("%d",&r);
//     int c;
//     printf("enter the number of columns :");
//     scanf("%d",&c);
//     int arr[r][c];
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     int sum = 0;
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             sum+=arr[i][j];
//         }
//     }
//     printf("\n");
//     printf("sum of the matrix is = %d\n",sum);
//     return 0;
// }
//                                 print the max value of the matrix.
// # include <stdio.h>
// int main(){
//     int r;
//     printf("enter the no. of rows :");
//     scanf("%d",&r);
//     int c;
//     printf("enter the number of columns :");
//     scanf("%d",&c);
//     int arr[r][c];
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     int max = 0;
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             if(arr[i][j] > max)
//             max = arr[i][j];
//         }
//     }
//     printf("\n");
//     printf("max of the matrix is = %d\n",max); 
//     return 0;
// }                             print the sum between l1r1 to l2r2 
// # include <stdio.h>
// int main(){
//     int r;
//     printf("enter the no. of rows :");
//     scanf("%d",&r);
//     int c;
//     printf("enter the number of columns :");
//     scanf("%d",&c);
//     int l1;
//     printf("enter the value of l1 :");
//     scanf("%d",&l1);
//     int r1;
//     printf("enter the value of r1 :");
//     scanf("%d",&r1);
//     int l2;
//     printf("enter the value of l2 :");
//     scanf("%d",&l2);
//     int r2;
//     printf("enter the value of r2 :");
//     scanf("%d",&r2);
//     int sum = 0;
//     int arr[r][c];
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=l1; i<l2; i++){
//         for(int j=r1; j<r2; j++){
//             printf("%d",arr[i][j]);
//             sum+=arr[i][j];
//         }
//     }
//     printf("\n");
//     printf("sum of the matrix is = %d\n",sum); 
//     return 0;
// }
//                                         WAP to print the sum max sum of row.
// # include <stdio.h>
// int main(){
//     int r;
//     printf("enter the no. of rows :");
//     scanf("%d",&r);
//     int c;
//     printf("enter the number of columns :");
//     scanf("%d",&c);
//     int arr[r][c];
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     int mindex = 0;
//     int mcount = 0;
//     for(int i=0; i<r; i++){
//         int count =0;
//         for(int j=0; j<c; j++){
//             if(arr[i][j]==1) count++;
//         }
//             if(count>mcount){
//                 mcount = count;
//                 mindex = i;
//             }
//         }
//     printf("\n");
//     printf("max sum of the matrix is = %d\n",mcount); 
//     printf("their row no is = %d\n",mindex); 
//     return 0;
// }
//                                        transpose.
// # include <stdio.h>
// int main(){
//     int r;
//     printf("enter the no. of rows :");
//     scanf("%d",&r);
//     int c;
//     printf("enter the number of columns :");
//     scanf("%d",&c);
//     int arr[r][c];
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=0; i<c; i++){
//         for(int j=0; j<r; j++){
//             printf("%d ",arr[j][i]);
        
//         }
//         printf("\n");
//     }
//     return 0;
// }
//                                              store and transpose
// # include <stdio.h>
// int main(){
//     int r;
//     printf("enter the no. of rows :");
//     scanf("%d",&r);
//     int c;
//     printf("enter the number of columns :");
//     scanf("%d",&c);
//     int arr[r][c];
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     int brr[c][r];
//     for(int i=0; i<c; i++){
//         for(int j=0; j<r; j++){
//             brr[i][j]=arr[j][i];
        
//         }
//     }
//     for(int i=0; i<c; i++){
//         for(int j=0; j<r; j++){
//             printf("%d ",brr[i][j]);
//         }
//         printf("\n");
//     }    
//     return 0;
// }
//                                change matrix into its transposed form
// # include <stdio.h>
// int main(){
//     int r;
//     printf("enter the no. of rows :");
//     scanf("%d",&r);
//     int c;
//     printf("enter the number of columns :");
//     scanf("%d",&c);
//     int arr[r][c];
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }   
//      for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//         int temp = arr[i][j]; 
//         arr[i][j] =arr[j][i];
//         arr[j][i] =temp;  
//         }
//     }
//     printf("\n");
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//         printf("%d ",arr[i][j]); 
//         }
//         printf("\n");
//     }
//     return 0;
// }
//                                      90 digree rotation clock wise.
// # include <stdio.h>
// int main(){
//     int r;
//     printf("enter the no. of rows :");
//     scanf("%d",&r);
//     int c;
//     printf("enter the number of columns :");
//     scanf("%d",&c);
//     int arr[r][c];
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }   
//      for(int i=0; i<r; i++){
//         for(int j=i; j<c; j++){
//         int temp = arr[i][j]; 
//         arr[i][j] =arr[j][i];
//         arr[j][i] =temp;  
//         }
//     }
//     printf("\n");
//      for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//         printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     for(int i=0; i<r; i++){
//         int j = 0;
//         int k = c-1;
//         while(j<k){
//           int temp = arr[i][j];
//           arr[i][j] =arr[i][k];
//           arr[i][k] =temp;
//         j++;
//         k--;
//     }
//     }
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//         printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
//                                multiply of matrix.
//         }
//     }
//     int r2;
//     printf("enter the no. of rows second matrix :");
//     scanf("%d",&r2);
//     int c2;
//     printf("enter the number of columns second matrix  :");
//     scanf("%d",&c2);
//     int brr[r2][c2];
//     for(int i=0; i<r2; i++){
//         for(int j=0; j<c2; j++){
//             scanf("%d",&brr[i][j]);
//         }
//     }  if (r==c2){
//          int res[r][c2];
//     for (int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             res[i][j] =0;
//             for(int k=0; k<c; k++){
//                 res[i][j] +=arr[i][k]*brr[j][k];
//            }
//         }
//     }
//        printf("\n");
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c2; j++){
//             printf("%d ",res[i][j]);
//         }
//         printf("\n");
//     }
//     }else
//     printf("could not multiply\n");
//     return 0;
// }
//                              WAP to print the spiral matrix.
// # include <stdio.h>
// int main(){
//     int r;
//     printf("enter the no. of rows :");
//     scanf("%d",&r);
//     int c;
//     printf("enter the number of columns :");
//     scanf("%d",&c);
//     int arr[r][c];
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     int minr = 0;
//     int maxr = r-1;
//     int minc = 0;
//     int maxc = c-1;
//     int count =0;
//     int te =r*c;
//     while(count<=te){
//     for(int j=minc; j<=maxc; j++){
//         printf("%d ",arr[minr][j]);
//         count++;
//     }if(count>=te)
//     break;
//     minr++;
//     for(int i=minr; i<=maxr; i++){
//       printf("%d ",arr[i][maxc]);
//       count++;
//     }if(count>=te)
//     break;
//     maxc--;
//     for(int j =maxc; j>=minc; j--){
//         printf("%d ",arr[maxr][j]);
//         count++;
//     }if(count>=te)
//     break;
//     maxr--;
//     for(int i = maxr; i>=minr; i--){
//         printf("%d ",arr[i][minc]);
//         count++;
//     }if(count>=te)
//     break;
//     minc++;
//     }
//     return 0;
// }
//                            set zero of matrix.
// # include <stdio.h>
// int main(){
//     int r;
//     printf("enter the no. of rows :");
//     scanf("%d",&r);
//     int c;
//     printf("enter the number of columns :");
//     scanf("%d",&c);
//     int arr[r][c];
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             if(arr[i][j]==0){
//                 for (int i =0; i<c; i++){
//                      arr[i][j] = -1;
//                     }
//                     for(int j =0; j<r; j++){
//                     arr[i][j] = -1;
//                     }
//                 }
//             }       
//         }
//         for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             if(arr[i][j]==-1){
//                 printf("%d ", 0);
//             }else printf("%d ", arr[i][j]);
//         }
//         printf("\n"); 
//     }
// return 0;
// }
                    