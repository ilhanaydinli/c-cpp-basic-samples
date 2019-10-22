#include <stdio.h>

main()
{
	
	int sayac, kackez;
	
	printf("kackez yenilemek istersiniz");
	scanf("%d", &kackez);
	sayac=0;
	do
	{
		sayac++;
		printf("%d kere \n", sayac);
		
	}
	while(sayac<kackez);

	return 0;
}


