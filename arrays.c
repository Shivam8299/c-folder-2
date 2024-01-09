//                     take a array from user and print them reversed order.
/*# include <stdio.h>
int main(){
    int arr[5];
    for(int i = 0; i < 5; i++){
        printf("\n enter the number of elements : ");
        scanf("%d",&arr[i]);
    }
    for(int i = 4; i>=0; i--){
    printf("%d ",arr[i]);
    }
    return 0;
}*/
//                         marks releted question 
/*# include <stdio.h>
int main(){
    int marks[10];
    for(int i=0; i<10; i++){
        printf("\n enter the number of marks : ");
        scanf("%d",&marks[i]);
    }
    for(int i=0; i<10; i++){
            if(marks[i]<35)
        printf("%d ",i);
    }
    return 0;
}*/
//                     WAP to printe the multification of all element of an array.
/*# include <stdio.h>
int main(){
    int arr[5];
    for(int i=0; i<5; i++){
    printf("\n enter the number of element :");
    scanf("%d",&arr[i]);
    }
    int m = 1;
    for(int i=0; i<5; i++){
        m = m*arr[i];
    } printf("%d",m);


        
    return 0;
}*/
// WAP to print the sum of all element of the number.
/*# include <stdio.h>
int main(){
    int arr[5];
    for(int i=0; i<5; i++){
    printf("enter the number of element :");
    scanf("%d",&arr[i]);
    }
   int sum = 0;
   for(int i=0; i<5; i++){
    sum=sum+arr[i];
   }
   printf("%d",sum);
    return 0;
}*/
// fint the maxium valure of all the elements of an array.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     int arr[n];
//     int max = arr[0];
//     for(int i=1; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0; i<n; i++){
//     if(arr[i]>=max) max=arr[i];
//     }
//     printf("%d",max);
//     return 0;
// }
//                                  even index +10 and odd index * 2.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//         }
//         for(int i=0; i<n; i++){
//             if(i%2!=0) arr[i]*=2;
//             else arr[i]+=10;
//         }
//         for(int i=0; i<n; i++){
//             printf("%d ",arr[i]);
//         }
    
//     return 0;
// }
//        count the number of elements which is greater then the given no. x.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the size of array : ");
//     scanf("%d",&n);
//     int x;
//     printf("enter the value of x : ");
//     scanf("%d",&x);
//     int arr[n];
//     int count = 0;
//     for(int i=0; i<n; i++)
//     scanf("%d",&arr[i]);
//     for(int i=0; i<n; i++){
//         if(arr[i]>x) count++;
//     }
//     printf("%d\n",count);
//     return 0;
// }
//           difference between the sum of even index element and the odd.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the size of array : ");
//     scanf("%d",&n);
//     int arr[n];
//     int sume = 0;
//     int sumo = 0;
//     int def = 0;
//     for(int i=0; i<n; i++)
//     scanf("%d",&arr[i]);
//     for(int i=0; i<n; i++){
//         if(i%2==0) sume+=arr[i];
//         else sumo+=arr[i];
//     }
//     def = sume-sumo;
//     printf("%d\n",def);
//     return 0;
// }
//                        print the pair of which sum of element==given value
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the size of array : ");
//     scanf("%d",&n);
//     int x;
//     printf("enter the value of x : ");
//     scanf("%d",&x);
//     int arr[n];
//     int count = 0;
//     for(int i=0; i<n; i++)
//     scanf("%d",&arr[i]);
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//          if(arr[i]+arr[j]==x){
//             count++;
//             printf("(%d,%d)",arr[i],arr[j]);
//          }

//         }
//     }
//     printf("%d ",count);
//     return 0;
// }
//                        print the triplets of which sum of element==given value
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the size of array : ");
//     scanf("%d",&n);
//     int x;
//     printf("enter the value of x : ");
//     scanf("%d",&x);
//     int arr[n];
//     int count = 0;
//     for(int i=0; i<n; i++)
//     scanf("%d",&arr[i]);
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             for(int k=j+1; k<n; k++){
//                 if (arr[i]+arr[j]+arr[k]==x){
//                     count++;
//                     printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
//                 }
//             }

//         }
//     }
//     printf("\n%d ",count);
//     return 0;
// }
//                 WAP to print the second max element of the array 
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the size of array : ");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++)
//     scanf("%d",&arr[i]);
//     int max = 0;
//     int smax = 0;
//     for(int i=0; i<n; i++){
//         if(max<arr[i]){
//             smax = max;
//             max = arr[i];
//         }else if (smax<arr[i] && max!=arr[i]){
//             smax = arr[i];
//         }
//     }
//     printf("%d",smax);
//     return 0;
// }
//                         copy and reverse reverse arr into brr
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     int arr[n];
//     int brr[n];
//     for(int i=0; i<n; i++)
//     scanf("%d",&arr[i]);
//     for(int i=0; i<n; i++){
//         brr[i] = arr[(n-1)-i];
//     }
//     for(int i=0; i<n; i++){
//      printf("%d ", brr[i]);
//     }
//      return 0;
// }
//                                    reverse the array without using extra array.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++)
//     scanf("%d",&arr[i]);
//     int i = 0;
//     int j = n-1;
//     while (i<=j){
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     i++;
//     j--;
//     }
//     for(int i=0; i<n; i++)
//     printf("%d ", arr[i]);
//     return 0;
// }
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++)
//     scanf("%d",&arr[i]);
//     int i = 0;
//     int j = n-1;
//     int c=0;
//     while (i<=j){
//        if(arr[i] == arr[j]){
//          i++;
//          j--;
//          c+=1;
//         }
//          else{
//         printf("given array is not palindrome\n");
//         break;
//         }
//         }
//         if(c>=n/2){
//         printf("given array is palindrome\n");
//         }
//     return 0;
// }
//              rotate the given array by K steps where k is non negative number
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     int k;
//     printf("enter the value of the k :");
//     scanf("%d",&k);
//     int arr[n];
//     for(int i=0; i<n; i++)
//     scanf("%d",&arr[i]);
//     int j = (n -k);
//     if (k>n){
//         k = k%n;
//     for(int i=0; i<k; i++){
//         printf("%d ",arr[j]);
//         j++;
//     }
//     }else{
//     for(int i=0; i<k; i++){
//         printf("%d ",arr[j]);
//         j++;
//     }
//     }for(int i=0; i<n-k; i++)
//     printf("%d ",arr[i]);
//     return 0;
// }
//                      WAP to print the duplicate element of the array.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++)
//     scanf("%d",&arr[i]);
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i]==arr[j]){
//             printf("%d is the duplicate of given array.\n",arr[j]);
//             break;
//             }
//         }
//     }
//     return 0;
//}
//                                 print unique no. of array
// # include <stdio.h>
// # include <stdbool.h>
// int main(){
//     int n;
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++)
//     scanf("%d",&arr[i]);
//     for(int i=0; i<n; i++){
//         bool flag = false;
//         for(int j=i+1; j<n; j++){
//             if(arr[i]==arr[j]){
//                 flag = true;
//             }
//         } if(flag == false){
//              printf("%d is unique no. of the array\n",arr[i]);
//              break;
//         }
//     }
//     return 0;
// }
//                                   reverse array
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the size of the array");
//     scanf("%d",&n);
//     int arr[n];  
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     int k = n-1;
//     int i = 0;
//     while(i<=k){
//         int temp = arr[i];
//         arr[i] = arr[k];
//         arr[k] = temp;
//         i++;
//         k--;
//     }
//     for(int i=0; i<n; i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
//                                     target
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the sise of the array :");
//     scanf("%d",&n);
//     int target;
//     printf("enter the value of the target :");
//     scanf("%d",&target);
//     int arr[n];
//     for(int i=0; i<n; i++){
//     scanf("%d",&arr[i]);
//     }
//     int i = 0;
//     int j = n-1;
//     while(i<j){
//         if(arr[i]+arr[j]==target){
//             printf("%d ",arr[i]);
//             printf("%d",arr[j]);
//             break;
//         }
//         else if (arr[i]+arr[j]>target)
//         j--;
//         else if(arr[i]+arr[j]<target)
//         i++;
//     }
//     return 0;
// }
//                                          bubble sort.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the size of the arrays :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<(n-1)-i; j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     printf("\n");
//     for(int i=0; i<n; i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
//                                    optimize bubble shot.
// # include <stdio.h>
// # include <stdbool.h>
// int main(){
//     int n;
//     printf("enter the sise of the arrays :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0; i<n-1; i++){
//         bool flag = true;
//         for(int j=0; j<(n-1)-i; j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//                 flag = false;
//             }
//         }
//         if(flag == true)
//         break;
//     }
//     printf("\n");
//     for(int i=0; i<n; i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
//}
//                                          decending order bubble shot
// # include <stdio.h>
// # include <stdbool.h>
// int main(){
//     int n;
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0; i<n-1; i++){
//         int flag = true;
//         for(int j=0; j<(n-1)-i; j++){
//             if(arr[j]<arr[j+1]){
//                 int temp = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j] = temp;
//                 flag = false;
//             }
//             if (flag == true)
//                 break;
//         }
//     }
//     printf("\n");
//     for(int i=0; i<n; i++){
//         printf("%d ",arr[i]);
//     }
// return 0;
// }
//                                               SELETCTION SHOT.
// # include <stdio.h>
// # include <limits.h>
// int main(){
//     int n;
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
    
//     for(int i=0; i<n-1; i++){
//         int min = INT_MAX;
//         int min_index = -1;
//         for(int j=i; j<n; j++){
//             if(arr[j]<min){
//                 min  = arr[j];
//                 min_index = j;
//             } 
//         }
//         int temp = arr[min_index];
//         arr[min_index] = arr[i];
//         arr[i] = temp;
//     }
//     printf("\n");
//     for(int i=0; i<n; i++){
//         printf("%d ",arr[i]);
//     }
// return 0;
// }
//                                                         insertion sort.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=1; i<n; i++){
//         int j=i;
//         while(j>0 && arr[j]<arr[j-1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j-1];
//                 arr[j-1] = temp;
//                 j--;
//             }
//         }
//     printf("\n");
//     for(int i=0; i<n; i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the size of the arrays :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<(n-1)-i; j++){
//             if (arr[j] ==0){
//                 int temp = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j] = temp;

//             }
//         }
//     }
//     for(int i=0; i<n; i++){
//         printf("%d ",arr[i]);
//         }
//     return 0;
// }
                           // print the last k elements.
// # include <stdio.h>
// int main(){
//     int arr[9] = {1,2,3,4,5,6,7,8,9};
//     int k;
//     printf("enter the value of k :");
//     scanf("%d",&k);
//     for(int i=(9-k); i<9; i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
// WAP to check if all element of arrays  are consercative print yes otherwise no.
// # include <stdio.h>
// int main (){
//     int n;
//     printf("enter the value of n :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     int m  = arr[0];
//     int i=0;
//     int c = 0;
//     while(i<n){
//         if(arr[i]== m){
//             i++;
//             m++;
//             c++;
//         }else{
//             printf("no");
//             break;
//         }
//     }if(c==n){
//         printf("yes");
//     }
//     return 0; 
// }
//                            WAP to print all the duplicates.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     int arr[n];
//     for (int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i]==arr[j]){
//                 printf("%d ",arr[i]);
//             }
//         }
//     }
//     return 0;
// }
#include <stdio.h>
char b(void);
void main(){
    printf("%c",b());
}
char b(){
    char a;
    scanf("%c\n",&a);
    return a;

}


