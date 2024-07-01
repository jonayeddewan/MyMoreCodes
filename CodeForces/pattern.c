#include<stdio.h>
int main()
{
	for(int i=1; i<=4; i++)
	{
		if(i==1 || i==4)
		{
			for(int j=1; j<=4; j++)
			{
				printf("*");
			}
		}
		else
		{
			for(int j=1; j<=4; j++)
			{
				if(j==1 || j==4)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}