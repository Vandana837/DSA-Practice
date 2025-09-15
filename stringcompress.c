#include<stdio.h>
#include<string.h>
void CompressString(char str[])
{
    int len=strlen(str);
    int count=1;
    for(int i=0;i<len;i++)
    {
        printf("%c",str[i]);
        while(i<len-1&&str[i]==str[i+1])
        {
            count++;
            i++;
        }
        printf("%d",count);
        count=1;
    }
}
int main()
{
    char str[100];
    printf("enter a string:");
    scanf("%s",str);
    printf("compressed string:");
    CompressString(str);
    return 0;
}