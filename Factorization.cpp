#include <stdio.h>
int main ()
{
	int k, i;
	scanf("%d", &k);
	for(i=2; i<=k; i++)
	{
		if(k%i == 0)
		{
			printf("%d\n", i);
			k = k/i;
			i = 1;
		}
	}
	printf("0");
}
