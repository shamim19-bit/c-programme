#include<stdio.h>
int main()
{
    char index[200];//={'S','A','N','J','I','D','A','R','I','V','A','\0'};
    //printf("%s\n",index);
    for(index=0;index<=200;index++){
        scanf("%c",&c);
    }


 for(int i=0;i<=20;i++){

    if(index[i]>='A'&&index[i]<='Z'){
        index[i]=(index[i]-'A')+'a';
    }
 }
 printf("%s",index);



}
