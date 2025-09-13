#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[100];
   int freq[256]={0};
   printf("enter the string:");
   gets(str);
   for(int i=0;str[i]!='\0';i++)
   {
   freq[(int)str[i]]++;
   }
   printf("character frequencies:");
   for(int i=0;i<256;i++){
    if((int)freq[i]!=0){
        printf("%c->%d\n",i,freq[i]);
    }
   }
   return 0;
}