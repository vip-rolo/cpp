#include <stdio.h>
#include <string.h>
char s[210][100]; 
int main()
{
    int k=0,i;
    while(scanf("%s",s[k])!=EOF)k++;
    for(i=0;i<k-2;i++)
    if(strcmp(s[i],s[k-2])==0)
    strcpy(s[i],s[k-1]);
    for(i=0;i<k-2;i++)
	{ 
        if(i)printf(" ");
        printf("%s",s[i]);
    }
    return 0;
}
