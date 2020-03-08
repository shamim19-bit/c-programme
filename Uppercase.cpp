#include<stdio.h>
int main()
{
    char country[]={'s','h','a','m','i','m',  's','o','r','k','a','r','\0'};
    printf("%s\n",country);

    int length=12;
    //char ch='a';
    for(int i=0;i<length ;i++){
            if(country[i]>='a'&&country[i]<='z'){
                country[i]=(country[i]-'a')+'A';
            }
    }
    printf("%s",country);

}
