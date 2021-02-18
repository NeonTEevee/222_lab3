#include <stdio.h>
#include <math.h>

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
		j = j*10;
	}
	
	j = 1;
	for(i=0; j<=p; i++)
	{
		j = j*10;
	}
	
	temp = p;
	while(temp>0)
	{
		temp = temp/10;
		if(temp>0)
			digit++;
	}
	
	right = 0;
	left = digit-1;
	
	check = 0;
	for(i=0; check == 0; i++)
	{
		if(right>=left)
			check = 1;
		while(value[right] != value[left] && value[right] > value[left])
			value[right] -= 2;
			p -= 2;
		if(value[right] != value[left] && value[right] < value[left])
		{
			value[right] = 9;
			value[right+1]--;
			p -= 2;
		} else {
			right++;
			left--;
		}
	}
	
	printf("%d", p);
	return 0;
}
