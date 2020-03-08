#include<stdio.h>
int main()
{
    int M,N,i,j,sum;
      scanf("%d%d",&M,&N);
    M=0;
    N=0;
    for(i=0;i<=20;i++){
        M=M*i;
    }
    for(j=0;j<=20;j++){
        N=M*j;
    }
    sum=M+N;
    printf("%d",sum);

    return 0;
}
