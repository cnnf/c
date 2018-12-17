#include<stdio.h>
int min(int a[], int n);
int max(int a[], int n);
void f(int *m, int *n);
int main()
{
	int a[100];
	int i, n,mi,ma;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		if(a[i]==max(a,n))
			ma=i;
		if (a[i] == min(a, n))
			mi = i;
	}
	f(&a[0],& a[mi]);
	f(&a[n-1], &a[ma]);
	for (i = 0; i < n; i++)
	{
		if(i==n-1)
			printf("%d", a[i]);
		else
			printf("%d ", a[i]);
	}
}
int min(int a[], int n)
{
	int i, min = 10000;
	for (i = 0; i < n; i++)
	{
		min = min < a[i] ? min : a[i];
	}
	return min;
}

int max(int a[], int n)
{
	int i, max = -32767;
	for (i = 0; i < n; i++)
	{
		max = max > a[i] ? max : a[i];
	}
	return max;
}
void f(int *m, int *n)
{
	int t;
	t = *m;
	*m = *n;
	*n = t;
}
