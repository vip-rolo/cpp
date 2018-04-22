#include<iostream>
#include<cstring>
using namespace std;
int F[1000001][4],a[1000],z=0,g=0,t=0,n=1,l=0,k=0,y=0;
void init()
{
	while (cin>>F[n][1])
	{
		F[n][2]=1;
		F[n][3]=0;
		n++;
	}
	n--;
}
void bxj()
{
	for (int i=n-1;i>=1;i--)
	{
		l=k=0;
		for (int j=i+1;j<=n;j++)
		{
			if ((F[i][1]>=F[j][1])&&(F[j][2])>l)
			{
				l=F[j][2];
				k=j;
			}
			if (l>0)
			{
				F[i][2]=l+1;
				F[i][3]=k;
			}
		}
	}
	k=1;
	for (int i=1;i<=n;i++)
	{
		if (F[i][2]>F[k][2]) k=i;
	}
	cout<<F[k][2]<<endl;
}

void tx()
{
    for (int i=1;i<=n;i++)
	{
		k=0;
		int dmin=999999;
		for (int j=1;j<=y;j++) 
		{
			if (a[j]>=F[i][1]) 
			{
				if (a[j]<dmin) 
				{
					dmin=a[j];
					k=j;
				}
			}
		}
		if (k!=0) 
		{
			a[k]=F[i][1];
		}
		else 
		{
			y++;
			a[y]=F[i][1];
		}
			
	}
	cout<<y;
}
int main()
{
	init();
    bxj();
    tx();
	return 0;
}
