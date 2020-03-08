#include<stdio.h>
int prime(int n){
    int i;
    if(n<1){
        return 0;
    }
    for(i=2;i<=n;i++){

        if(n%i==0){
            return 0;
        }

    }
    return 1;

}
int main()
{

    int n;
    while(1){

printf("Enter any positive number:");
    scanf("%d",&n);
    if(n==0){
        break;
    }
    if(1==prime(n)){
        printf("%d This is prime number:",n);

    }
    else
    {
        printf("%d It is not prime number!",n);
    }
    }
    return 0;
}
