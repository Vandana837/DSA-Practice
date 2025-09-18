#include<stdio.h>
#include<string.h>
char* LongestCommanPrefix(char strs[][100],int n)
{
    if(n==0)
    return " ";
    static char prefix[100];
    strcpy(prefix,strs[0]);
    for(int i=1;i<n;i++){
        while(strncmp(prefix,strs[i],strlen(prefix))!=0){
        prefix[strlen(prefix)-1]='\0';
        if(strlen(prefix)==0)
        return " ";

        }
    }
    return prefix;
}
int main()
{
    char strs[3][100]={"flower","flow","flight"};
    int n=3;
    printf("Longest common prefix:%s\n",LongestCommanPrefix(strs,n));
    return 0;
}