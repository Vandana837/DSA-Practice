#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str1[100],str2[100];
    int freq1[256]={0},freq2[256]={0};
    printf("enter the first string:\n");
    gets(str1);
    printf("enter the second string:\n");
    gets(str2);
    for(int i=0;str1[i]!='\0';i++)
    {
        freq1[(int)str1[i]]++;
        freq2[(int)str2[i]]++;
    }
    for(int i=0;i<256;i++)
    {
        if(freq1[i]!=freq2[i])
        {
            printf("strings are not anagrams");
            return 0;
        }

    }
    printf("strings are anagrams");
    return 0;
}