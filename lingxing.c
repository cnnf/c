#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char a[100][100]={ };
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i<n/2+1)
			{
				if(abs(i-j)==n/2||i+j==n/2)
					a[i][j]='*';
			}
			else
			{
				if((i-n/2)==j||(i-n/2)==n-j-1)
					a[i][j]='*';
			}
			
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}
