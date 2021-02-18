#include <stdio.h>
int main ()
{
	int n, i, p, a, view[48], max = 0, best = 0;
	scanf("%d", &n);
	int data[n];
	
	for(i=0; i<=48; i++)
		view[i] = 0;
		
	for(i=0; i<n; i++)
	{
		scanf("%d %d", &p, &a);
		view[p] += a;
	}

	for(i=0; i<=48; i++)
	{
		if(max < view[i])
		{
			max = view[i];
			best = i;
		}
	}
	printf("%d %d", best, max);
}
