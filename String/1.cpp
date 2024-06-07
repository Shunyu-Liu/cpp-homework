#include<stdio.h>
int find(char* s1,char* s2);
int main()
{
    char s1[100000],s2[100000];
    gets(s1),gets(s2);
    printf("%d",find(s1,s2));
    return 0;
}
int find(char* s1,char* s2)
{
   for(int i=0;s1[i]!='\0';i++)
        for(int j=0;s2[j]!='\0'&&s1[i+j]==s2[j];j++)
            if(s2[j+1]=='\0')   return i;
    return -1;
}
