#include <stdio.h>

main()
{
	
	int sayac, kackez;
	
	printf("kackez yenilemek istersiniz");
	scanf("%d", &kackez);
	sayac=0;
	while(sayac<kackez)
	{
		sayac++;
		printf("%d kere \n", sayac);
	}

	return 0;
}


