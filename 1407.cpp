#include <stdio.h>
#include <string.h>
char s[100+10];
int a[26];
int main()
{
    int len;
    int i,j;
    int min,max;
    int t;
    memset(a,0,sizeof(a));
    scanf("%s",s);
    len=strlen(s);
    for(i=0;i<len;i++){a[s[i]-'a']++;}
    min=999;
    max=-1;
    for(i=0;i<26;i++)if(a[i]>0){if(min>a[i])min=a[i];if(max<a[i])max=a[i];}
    if(min!=999&&max!=-1)
	{
        t=max-min;
        if(t<2)
		{printf("No Answer\n");printf("0\n");}
		else if(t==2)
		{printf("Lucky Word\n");printf("2\n");}
		else
		{
            for(i=2;i<t;i++)
            if(t%i==0){break;}
            if(i==t){printf("Lucky Word\n");printf("%d\n",t);}
			else{printf("No Answer\n");printf("0\n");} 
        }
    }
	else{printf("No Answer\n");printf("0\n");}
    return 0;
}
