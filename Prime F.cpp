#include <stdio.h>
int main ()
{
	int x, p, i, j;
	scanf("%d", &x);
	for(i=2; i<=x; i++)
	{
		for(j=2; j<=x; j++)
		{
			if(i%j == 0)
			{
				j = x + 1;
			}
			if(i&j != 0)
				p = i;
		}
	}
	printf("%d", p);
}
