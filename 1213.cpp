#include<cstdio>
#include<iostream>
bool c[100]={0},d[100]={0},b[100]={0};
int tt=0,a[100];
void dfs(int i)
{
	int j;
	for(j=1;j<=8;j++)
	{
		if((!b[j])&&(!c[i+j])&&(!d[i-j+7]))
		{
			a[i]=j;
			b[j]=1;
			c[i+j]=1;
			d[i-j+7]=1;
			if(i==8)
			{
				int i;tt++;
				printf("No. %d\n",tt);
				for(int k=1;k<=8;k++)
				{
					for(int l=1;l<=8;l++)
				    if(k==a[l])printf("1 ");
				    else printf("0 ");
				    printf("\n");
				}
				
			}
			else dfs(i+1);
			b[j]=0;
			c[i+j]=0;
			d[i-j+7]=0;
		}
	}
}
int main()
{
	dfs(1);
	return 0;
}
