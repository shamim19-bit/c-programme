#include<stdio.h>
double pi=3.14;
int test(int x){
double pi=3.1416;
int y=x;
x=2*y;
return(x*y);
}
int main()
{
    int x=10,y=20,z=30;
    z=test(x);
    printf("%d %d %d",x,y,z);
    printf("%lf",pi);
    int test();
    printf("%lf",pi);

}
