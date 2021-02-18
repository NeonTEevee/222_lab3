#include <stdio.h>
int main ()
{
	int x, p, i, j, check;
	scanf("%d", &x);
	for(i=2; i<=x; i++)
	{
		check = 1;
		for(j=2; j<i; j++)
		{
			if(i%j == 0)
			{
				j = i;
				check = 0;
			}
		}
		if(check == 1)
		{
			for(j=2; j<=i; j++)
			{
				if(i%j == 0)
				{
					p = i;
				}
			}
		}
	}
	printf("%d", p);
}
