#include<stdio.h>
int main()
{
    int first,last,n,search,arr[100],i,mid,num;
    printf("Enter any positive number:");
    scanf("%d",&num);
    printf("Give the element of number%d :",n);
    //scanf("%d",&n);
    printf("Give the searching number:");
    scanf("%d",&search);
    for(i=0;i<=num;i++){
        scanf("%d",&arr[i]);
    }
    int fast=0;
     last=n-1;
    while(fast<=last){
         mid=(fast+last)/2;
         if(num==arr[mid])
         {
             printf("The element:%d");
         }
    }








    return 0;
}
