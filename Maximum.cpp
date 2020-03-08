#include<stdio.h>
int test(int arr[],int n){
int i;
 int max=arr[0];
for(i=1;i<=9;i++){

if(arr[i]>max){
    max =arr[i];
}
return max;
}
}
int main()
{
    int arr[]={10,20,300,50,70,80,400,700,900};
    int n=9;
    int max=test(arr,n);
    printf("%d",max);
    return 0;

}
