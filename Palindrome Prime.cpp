#include <stdio.h>

int main ()
{
	int x, i, j, check, p, n, temp, digit, right, left;
	scanf("%d", &x);
	
	int value[x];
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
	
	j = 1;
	for(i=0; j<=p; i++)
	{
		temp = (p/j)%10;
		value[i] = temp;
		printf("Digit #%d = %d\n", i, value[i]);
		j = j*10;
	}
	
	j = 1;
	for(i=0; j<=p; i++)
	{
		printf("Value[%d] = %d\n", i, value[i]);
		j = j*10;
	}
	
	temp = p;
	while(temp>0)
	{
		temp = temp/10;
		if(temp>0)
			digit++;
	}
	printf("Digit = %d", digit);
	
	right = 1;
	left = digit;
}
