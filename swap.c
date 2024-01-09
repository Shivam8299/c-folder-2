//                                      swaping with use of third variable.
// # include <stdio.h>
// int main(){
//     int a;
//     printf("enter the value of a :");
//     scanf("%d",&a);
//     int b;
//     printf("enter the value of b :");
//     scanf("%d",&b);
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     printf("value of a %d\n",a);
//     printf("value of a %d",b);
//     return 0;
// }
//                                swap without use third variable.
// # include <stdio.h>
// int main(){
//     int a;
//     printf("enter the value of a :");
//     scanf("%d",&a);
//     int b;
//     printf("enter the value of b :");
//     scanf("%d",&b);
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     printf("value of a %d\n",a);
//     printf("value of b %d\n",b);
//     return 0;
// }
// # include <stdio.h>
// int main(){
//     int a,b;
//     printf("enter the value of a & b :");
//     scanf("%d%d",&a,&b);
//     b=a+b-(a=b);
//     printf("%d\n%d\n", a,b);
//     return 0;
// }
//                test questions.
// #include <stdio.h>
// int main()
// {
//     int n;    
//     printf("enter the size of arr :");
//     scanf("%d",&n);
//     int arr[n];
//     for (int i=0; i<n; i++){
//     scanf("%d",&arr[i]);
//     }
//     int p,value;
//     printf("Enter the address of p: ");
//     scanf("%d",&p);
//     printf("enter the number of value: ");
//     scanf("%d",&value);
//     p--;
//     n++;
//     for (int i=n-1; i>p; i--)
//         arr[i]=arr[i-1];
//     arr[p]=value;    
//     for (int i=0; i<n; i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }
//k rotation;

// # include <stdio.h>
// int main(){
//     int n, k;
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("enter the value of k ");
//     scanf("%d",&k);
//     for(int i=k; i<n; i++){
//         printf("%d",arr[i]);
//     }
//     for(int i=0; i<k; i++){
//         printf("%d",arr[i]);
//     }
//     return 0;
// }
//           spiral matrix;
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


//90 degree clock wise;

// # include <stdio.h>
// int main(){
//     int r,c;
//     printf("enter the no. of rows :");
//     scanf("%d",&r);
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


//           sorting
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the size of the arr :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<(n-1)-i; j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j]= arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     for(int i=0; i<n; i++){
//         if(arr[i]>0){
//         printf("position element are : %d ",arr[i]);
//         }
//         printf("\n");
//         if(arr[i]>0){
//             printf("position element are : %d ",arr[i]);
//         }
//     }
//     return 0;
// }
