#include<stdio.h>
int main()
{
	int a[10], i;
	for (i = 0; i < 10; i++)
	{
		
		scanf("%d", &a[i]);
	}
	for (i = 0; i <= 9; i++)
	{
		for(int j=i+1;j<10;j++)
			if (a[i] > a[j])
			{
				int t;
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}

	}
	for (i = 0; i < 10; i++)
		printf("%d\n", a[i]);
}
