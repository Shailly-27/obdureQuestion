#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="hello";
    int i,len;
    len= strlen(s);
    for(i=len-1;i>=0;i--)
    {
        printf("%c",s[i]);
    }
return 0;
}
