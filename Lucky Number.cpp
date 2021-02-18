#include <stdio.h>
int main ()
{
	int num, i, j, check = 0, temp;
	scanf("%d", &num);
	temp = num;
	
	for(i=2; check<3; i++)
	{
		if(num/i != 1 || check == 2)
		{
			if(num%i == 0)
			{
				if(i == j)
				{
					printf("%d is not a Lucky Number.", temp);
					return 0;
				}
				num = num/i;
				j = i;
				check++;
				for(i=2; i<j; i++)
				{
					if(j%i == 0)
					{
						printf("%d is not a Lucky Number.", temp);
						return 0;
					}
				}
				i = 1;
			}
		} else {
			printf("%d is not a Lucky Number.", temp);
			return 0;
		}
	}
	if(num == 1)
	{
		printf("%d is a Lucky Number.", temp);
		return 0;
	} else {
		printf("%d is not a Lucky Number.", temp);
		return 0;
	}
}
