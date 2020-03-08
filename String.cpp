#include<stdio.h>
int main()
{
    char country[]={'s','h','a','m','i','m','s','o','r','k','a','r','\0'};
    printf("%s\n",country);

    int length=12;
    //char ch='a';
    for(int i=1;i<length ;i++){
            if(country[i]>=97&&country[i]<=122){
                country[i]=(country[i]-'a')+'A';
            }
    }
    printf("%s\n",country);

}
