//# include <stdio.h>
// int main (){
//int x;
//printf("enter the no. : ");
//scanf("%d", &x);
//printf("%d",x%2 == 0);
// return 0;
//(checking true or false)
// int issunday =0;
// int issnowing =1;
// printf("%d \n", issunday && issnowing);
// return 0;
// 
//no. checking true or false
// int x;
// printf("enter the number : ");
// scanf("%d", &x);
// printf("%d",x>9 && x<100);
// return 0;
// }


// #include<stdio.h>
// int main(){
//     int age;
//     printf("enter the age");
//     scanf("%d",&age);
//     if (age>=18){
//         printf("young \n");
//         printf("the can drive\n");
//     }
//     else{
//         printf("not adult\n");
//     }
// return 0;
// }

//                                      question 3.
// # include <stdio.h>
// int main(){
//     int a =12;
//     int b =5;
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("the value of a is %d\n", a);
//     printf("the value of b is %d\n", b);
//     return 0;
// }
//                                    question 4.
// # include <stdio.h>
// int main(){
//     int x = 12;
//     int y = 5;
//     printf("%d\n%d\n%d\n%d\n%d\n", x+y, x-y, x*y, x/y,x%y);
//     return 0;
// }
//                                    question 5.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the value of n :");
//     scanf("%d",&n);
//     float x = (float)n/2;
//     printf("%.2f",x);
//     return 0;
// }
// # include <stdio.h>
// int main(){
//     int x = 16;
//     int y = 2004;
//     char month[] = "june";
//     printf("%d\n%s\n%d\n",x, month, y);
//     return 0;
// }
//                                        Question 9;
// # include <stdio.h>
// int main(){
//     int a;
//     printf("enter the value of a :");
//     scanf("%d",&a);
//     int b;
//     printf("enter the value of b :");
//     scanf("%d",&b);
//     int c =a%b;
//     printf("%d\n",(a-c));
//     return 0;
// }
//                                 question 10.
// # include <stdio.h>
// int main(){
//     int a;
//     printf("enter the value of a :");
//     scanf("%d",&a);
//     int b;
//     printf("enter the value of b :");
//     scanf("%d",&b);
//     if(a>b){
//         printf("%d",a);
//     }
//     else{
//         printf("%d",b);
//     }
//     return 0;
// }
//                                 question 14.
// # include <stdio.h>
// int main(){
//     int a;
//     printf("enter the value of a :");
//     scanf("%d",&a);
//     if(a%2==0){
//         printf("%d",a);
//     }
//     else{
//         printf("%d",a*2);
//     }
// }

//                                          question 17.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the value of n :");
//     scanf("%d",&n);
//     if(n%400==0){
//         printf("leap year\n");
//     }
//     else{printf("not leap year\n");
//     }
//     return 0;
// }
//                                         question 19.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the value of n :");
//     scanf("%d",&n);
//     if(n<10000){
//         printf("basic salery");
//     }
//     if(n>10000 && n<20000){
//     int HRA = n*25/100;
//     int DA = n*90/100;
//     int TM = HRA+DA+n;
//     printf("%d\n",TM);
//     }
//     if(n>20000){
//     int HRA = n*30/100;
//     int DA = n*95/100;
//     int TM = HRA+DA+n;
//     printf("%d\n",TM);
//     }
//     return 0;
// }
//                                  not solved.                                    
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the value of the n :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     int brr[100];
//     int i=0;
//     for(int i=0; i<n; i++){
//         if(arr[i]!=-1){
//             int c=1;
//             for(int j=i+1; j<n; j++){
//                 if (arr[i]==arr[j]){
//                     c++;
//                     arr[i] = -1;
//                 }
//             }
//             brr[i] = c;
//         }
//     }
//         for(int j=0; j<n; j++){
//            if(arr[j]!=-1){
//            printf("frequency of %d %d\n",arr[i],brr[j]);
//         }
//     }
//     return 0;
// }
//                                         question 24.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the size of the string :");
//     scanf("%d",&n);
//     char arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%s",&arr[i]);
//     }
//     int k;
//     printf("enter the value of k :");
//     scanf("%d",&k);
//     for(int i=0; i<k; i++){
//         for(int j=0; j<n; j++){
//             printf("%c",arr[j]);
//         }
//     printf("\n");
//     }
//     return 0;
// }
//                   question 28.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the value of the n :");
//     scanf("%d",&n);
//     float sum = 0;
//     for(int j=1; j<=n; j++){
//         sum = sum+1.0/j;
//     }
//     printf("%.2f\n",sum);
//     return 0;
// }
//                                                 question 31;
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the value of the n :");
//     scanf("%d",&n);
//     int rev=0;
//     for(int i=1; n>0; i++){
//         rev =(rev*10)+n%10;
//         n=n/10;
//     }
//     printf("%d",rev);
// }


//                               question 32.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     int c=0;
//     int i=2;
//     while(i<n){
//         if(n%i==0){
//             c++;
//         }
//         i++;
//     }
//     if(c==1){
//         printf("yes\n");
//     }
//     else{
//     printf("no\n");
//     }
//     return 0;
// }
//                                      question 32.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the value of the n:");
//     scanf("%d",&n);
//     int k = n;
//     int rev=0;
//     for(int i=1; n>0; i++){
//         rev=(rev*10)+n%10;
//         n=n/10;
//     }
//     if(rev==k){
//         printf("given number is palindrome %d\n",rev);
//     }
//     else{
//         printf("given number is not palindrome");
//     }
//     return 0;
// }
//                                    subarray of an array.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the size of the array");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     int k=0;
//     while(k<n){
//     for(int i=k; i<n; i++){
//         for(int j=k; j<=i; j++){
//             printf("%d ",arr[j]);
//         }
//         printf("\n");
//     }
//     k++;
//     }
//     return 0;
// }
//                                                LCM and HCF q 36.
// # include <stdio.h>
// int main(){
//     int a, b;
//     printf("enter the value of the a & b :");
//     scanf("%d%d",&a,&b);
//     int x=a;
//     int y=b;
//     while(a!=b){
//         if(a>b){
//             a=a-b;
//         }
//         if(a<b){
//             b=b-a;
//         }
//     }
//     printf("HCF of given Number is: %d\n",a);
//     int LCM=0;
//     LCM=(x*y)/a;
//     printf("the LCM of the given number is: %d\n",LCM);
//     return 0;
// }


 
//                                          Question no.37.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the no.");
//     scanf("%d",&n);
//     int sum=0;
//     int i=1;
//     while(i<=n/2){
//         if(n%i==0){
//             sum+=i;
//         }
//         i++;
//     }
//     if(sum==n){
//         printf("given number is perfect number %d\n",n);
//     }
//     else{
//      printf("given number is not perfect number %d\n",n);
//     }
// return 0;
// }
//                                                 question 39.

// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     int max=0;
//     int i=1;
//     while(i<=n){
//         scanf("%d",&i);
//         if(i>max){
//             max =i;
//         }
//         i++;
//     }
//     printf("maxium of given numbers is %d\n",max);
//     return 0;
// }
//                                      armstrong no.
// # include <stdio.h>
// # include<math.h>
// int main(){
//     int n;
//     printf("enter the numbr :");
//     scanf("%d",&n);
//     int x=n;
//     int count = 0;
//     for(int i=1; n!=0; i++){
//         n=n/10;
//         count++;
//     }
//     // printf("%d",count);
//     int sum = 0;
//     int p;
//     // int z;
//     int k=x;
//     for(int i=1; k!=0; i++){
//        p=n%10;
//        sum+=pow(p,count);
//        n=n/10; 
//     }
//     // printf("%d",z);
//     // return 0;
//     if(k==sum){
//         printf("given number is armstrong number %d\n",sum);
//     }
//     else{
//         printf("given number is not armstrong number %d\n",n);
//     }
//     return 0;
// }
//                                  insertion in array.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     int arr[n+1];
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     int num,index;
//     printf("enter the index and their value :");
//     scanf("%d%d",&index,&num);
//     for(int i=n-1; i>=index-1; i--){
//         arr[i+1]=arr[i];
//     }
//     arr[index-1]=num;
//     n++;
//     for(int i=0; i<n; i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
//  }
//                                                      1
//                                                      2 3
//                                                      4 5 6
// # include<stdio.h>
// int main(){
//     int n;
//     printf("enter the value of the n:");
//     scanf("%d",&n);
//     int k=1;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             printf("%d ",k);
//             k++;
//         }
//         printf("\n");
//     }
//     return 0;
// }
//                                     delicion.
// # include <stdio.h>
// int main(){
//     int n; 
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     int index;
//     printf("enter the index :");
//     scanf("%d",&index);
//     arr[n-1];
//     for(int i=index-1; i<n-1; i++){
//          arr[i]=arr[i+1];
//         }
//         n--;
//     for(int i=0; i<n; i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
//                                   insertion in array.
// # include <stdio.h>
// int main(){
//     int n; 
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     int arr[n+1];
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     int index;
//     printf("enter the index :");
//     scanf("%d",&index);
//     int num;
//     printf("enter the no. ");
//     scanf("%d",&num);
//     for(int i=n-1; i>=index-1; i--){
//             arr[i+1]=arr[i];
//         }
//         arr[index-1]=num;
//         n++;
//     for(int i=0; i<n; i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
//                                            question 47.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the vaue of the n :");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             printf("%d ",j);
//         }
//         for(int k=i-1; k>0; k--){
//             printf("%d ",k);
//         }
//     printf("\n");
//     }
//     return 0;
// }
//                                             question 49.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the value of the n :");
//     scanf("%d",&n);
//     int j=2;
//     int k=0;
//     while(j<n){
//     int count=0;
//     for(int i=2; i<=j/2; i++){
//         if(j%i==0) count++;  
//     }
//     if(count==0){
//         k++;
//     }
//     j++;
//     }
//     printf("%d\n",k);
// }
//                          X+(X^2)/2+(X^3)/3+(X^4)/4 ....upto N terms

// # include <stdio.h>
// # include <math.h>
// int main(){
//     int n;
//     printf("enter the value of the n :");
//     scanf("%d",&n);
//     float sum = 0;
//     int x = 2;
//     for(int i=1; i<=n; i++){
//         sum+=pow(x,i)/i;
//     }
//     printf("%.2f",sum);
//     return 0;
// }
//                      X-(X^3)/3+(X^5)/5-(X^7)/7+(X^9)/9-.... upto N terms

// # include <stdio.h>
// # include <math.h>
// int main(){
//     int n;
//     printf("enter the value of the n :");
//     scanf("%d",&n);
//     float k=1;
//     float sum = 0;
//     int x = 2;
//     for(int i=1; i<=n; i++){
//         if(i%2==0){
//         sum-=pow(x,k)/k;
//     }
//     else{
//         sum+=pow(x,k)/k;
//     }
//     k+=2;
//     }
    
//     printf("%.2f",sum);
//     return 0;
// }
//                           X-(X^3)/3!+(X^5)/5!-(X^7)/7!+ .... upto N terms
// # include <stdio.h>
// # include <math.h>
// int main(){
//     int n;
//     printf("enter the value of the n :");
//     scanf("%d",&n);
//     float sum = 0;
//     int x = 2;
//     int k=1;
//     for(int i=1; i<=n; i++){
//         long int fact =1;
//         for(int j=1;j<=k; j++){
//             fact=fact*j;
//         }
    
//     if(i%2==0){
//          sum-=pow(x,k)/fact;
//         }
//     else{
//          sum+=pow(x,k)/fact;
//         }
//         k+=2;
//     }
//     printf("%.4f",sum);
//     return 0;
// }
//      WAP to print only the prime factors of a given number.INPUT USER.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     for(int i=2; i<=n/2; i++){
//         if(n%i==0){
//             int c=0;
//             for(int j=2; j<=i/2; j++){
//                 if(i%j==0){
//                     c++;
//                 }
//             }
//             if(c==0){
//                 printf("%d\n",i);
//             }
//         }
        
//     }
//     return 0;
// }
//                                    question 55.
// # include <stdio.h>
// int main(){
//     int n,target;
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     printf("enter the value of the target :");
//     scanf("%d",&target);
//     int arr[n];
//     int count=0;
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0; i<n; i++){
//         if(arr[i]==target){
//             count++;
//             break;
//         }
//     }
//     if(count==1){
//         printf("yes\n");
//     }
//     else{
//         printf("no\n");
//     }
//     return 0;
//     }
//                                         question 56.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     int arr[n];
//     int sum1=0;
//     int sum2=0;
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0; i<n; i++){
//         if(arr[i]%2==0){
//             sum1+=arr[i];
//         }else{
//             sum2+=arr[i];
//         }
//     }
//     printf("sum of the even no : %d\n",sum1);
//     printf("sum of the odd no : %d\n",sum2);
//     return 0;
//     }
//                                                  question 57.
// # include <stdio.h>
// int main(){
//     int n, index;
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("enter the index :");
//     scanf("%d",&index);
//     arr[n-1];
//     for(int i=index; i<n; i++){
//         arr[i-1] = arr[i];
//     }
//     n--;
//     for(int i=0; i<n; i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
//                                                      question 58.
// # include <stdio.h>
// int main(){
//     int n, index,num;
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("enter the index :");
//     scanf("%d",&index);
//     printf("enter the value of the num :");
//     scanf("%d",&num);
//     arr[n+1];
//     for(int i=n; i>=index-1; i--){
//         arr[i+1] = arr[i];
//     }
//     arr[index-1]=num;
//     n++;
//     for(int i=0; i<n; i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int arr[6] = {1, 2, 3, 4, 5, 6};
//     int z=6;
//     int temp;
//     int n=n%z;
//     printf("Enter the value of k: ");
//     scanf("%d", &n);
//     for (int i =0; i<n; i++){
//         temp = arr[0];
//         for (int j = 0; j<z-1; j++){
//             arr[j]=arr[j+1];
//         }
//         arr[z-1] = temp;
//     }
//     for (int i=0; i<z; i++) {
//         printf("%d ",arr[i]);
//     }
    
//     return 0;
//}
//                                                * trangle
//  # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the value of the n:");
//     scanf("%d",&n);
//     printf("*\n");
//     for(int i=2; i<n; i++){
//         printf("*");
//         for(int j=1; j<i-1; j++){
//             printf(" ");
//         }
//         printf("*");
//         printf("\n");
//     }
//     for(int i=1; i<=n; i++){
//         printf("*");
//     }
//     printf("\n");
//     return 0;
// }
//                                        rotation of array.
// # include <stdio.h>
// int main(){
//     int n, k;
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("enter the value of the k ");
//     scanf("%d",&k);
//     int a=n-1;
//     int i=k;
//     while(i<a){
//         int temp=arr[i];
//         arr[i]=arr[a];
//         arr[a]=temp;
//         i++;
//         a--;
//     }
//     for(int i=0; i<k; i++){
//         int temp=arr[i];
//         arr[i]=arr[k-1];
//         arr[k-1]=temp;
//         k--;
//     }
//     int b=n-1;
//     int x=0;
//     while(x<b){
//         int temp=arr[x];
//         arr[x]=arr[b];
//         arr[b]=temp;
//         b--;
//         x++;
//     }
//     for(int i=0; i<n; i++){
//     printf("%d ",arr[i]);
//     }
//     return 0;
// }
//WAP to take a binary array which contains 0 and 1,
//and print the maximum number of consecutive 1's in the array. 

// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the size of the arrays :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     int count=0; 
//     int s=0;
//     for(int i=0; i<n; i++){
//         if(arr[i]==1){
//             count++;
//         }
//         if(arr[i]==0){
//            if(count>s){
//             s=count;
//             count=0;
//         } 
//         }
//     }
//     if(count>s){
//         s=count;
//     }
//     printf("%d\n",s);
//     return 0;
// }
//                                           question no.64.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     int arr[n];
//     float sum =0;
//     float count=0;
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0; i<n; i++){
//         sum += arr[i];
//         count++;
//     }
//     float median =sum/count;
//     printf("%.2f\n", median);
//     return 0;
// }
//                                        bublle sort.
// arr[j] = temp;
//                 flag = 0;
//             }
//         }
//         if(flag==1){
//             break;
//         }
//     }
//     printf("\n");
//     for(int i=0; i<n; i++){
//         printf("%d ",arr[i]);
//     }
// }
//                                       question 67.
// # include <stdio.h>
// int main(){
//     int n, // # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the ize of the first array :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0; i<n; i++){
//         int flag=1;
//         for(int j=i+1; j<n; j++){
//             if(arr[i]>arr[j]){
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//              s;
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("enter the value of the s :");
//     scanf("%d",&s);
//     for(int i=0; i<n; i++){
//         for(int j=i; j<=n; j++){
//             int sum=0;
//             for(int k=i; k<j; k++){
//                 sum= sum + arr[k];
//             }
//             if(sum==s){
//                for(int k=i; k<j; k++){
//                 printf("%d ",arr[k]);
//                }
//             }
//         }
//     }
//     return 0;
// }
//                                             hollow trangle.
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the value of the n :");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             if(j==i ||j==1 ||i==n){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
//                                            binary search.
// # include <stdio.h>
// int main(){
//     int n,t;
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("enter the value of the target :");
//     scanf("%d",&t);
//     int left = 0;
//     int right = n-1;
//     while(left<right){
// 		int mid = (left+right) / 2;
//         if(t==arr[mid]){
//             printf("%d",arr[mid]);
// 			break;
//         }
//         else if(t>arr[mid]){
// 			left=mid+1;
//         }
//         if(t<arr[mid]){
//             right=mid-1;
//         }
//     }
//     return 0;
// }
//                                      hollow diamod
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the value of the n :");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             printf(" ");
//         }
//         for(int k=1; k<=i; k++){
//             if(k==1){
//                 printf("* ");
//             }
//             else{
//                 printf(" ");
//             }
//             if(k==i){
//             printf("* ");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             printf(" ");
//         }

//         for(int k=1; k<=n-i; k++){
//             if(k==1){
//                 printf("* ");
//             }
//             else{
//                 printf(" ");
//             }
//             if(k==(n-i)){
//             printf("* ");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the value of the n :");
//     scanf("%d",&n);
//     for(int s=1; s<=n; s++){
//         printf("* ");
//     }
//     printf("\n");
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             printf(" ");
//         }
//         for(int k=1; k<=n-i; k++){
//             if(k==1){
//                 printf("* ");
//             }
//             else{
//                 printf(" ");
//             }
//             if(k==(n-i)-1){
//                 printf("* ");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

//0 
//2 4 
//4 8 8 
//8 16 16 16 
// # include <stdio.h>
// int main(){
//     int  n,a;
//     printf("enter the value of the n :");
//     scanf("%d",&n);
//     a=-2;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             if(j<=2 && i<=2){
//                 a+=2;
//                 printf("%d ",a);
              
//             }
//             if(j==1 && i>2){
//                 printf("%d ",a);
//                 a=a*2;
//             }
//             if(j>1 && i>2){
//                 printf("%d ",a);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>
int main(){
    printf("%d\n",3%(-4));
    return 0;
}