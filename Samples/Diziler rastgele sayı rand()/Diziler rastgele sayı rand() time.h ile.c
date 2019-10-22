#include <stdio.h>
#include <time.h>
int main()

{
	int nott[10],k;
	
	for(k=0;k<10;k++)
	{
		srand(time(NULL));
		nott[k]=rand()%80;
		printf("Not[%d]=%d\n", k, nott[k]);
	}
	printf("Rastgele 10 sayi.");
	return 0;
}
