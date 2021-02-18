#include <stdio.h>
int main ()
{
	int score[4], player[5], i, j, best, max = 0;
	
	for(i=1; i<=5; i++)
		player[i] = 0;
	
	for(i=1; i<=5; i++)
	{
		for(j=0; j<4; j++)
		{
			scanf("%d", &score[j]);
			player[i] += score[j];
		}
	}
	
	for(i=1; i<=5; i++)
	{
		if(max < player[i])
		{
			max = player[i];
			best = i;
		}
	}
	printf("%d %d", best, max);
}
