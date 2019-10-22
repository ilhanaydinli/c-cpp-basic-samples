#include <stdio.h>

main()
{
	
	int i,j;
	for(i=0; i<5; i++)
	{
		for(j=i; j<10; j++)
		printf("o");
		printf("\n");
	}
	for(i=6; i<11; i++)
	{
		for(j=0; j<i; j++)
		printf("o");
		printf("\n");
	}

	return 0;
}


