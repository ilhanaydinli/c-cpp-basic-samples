#include <stdio.h>

main()
{
	
	int i, sayi[10]={20,30,60,50,3,25,65,96,85,74}, enksayi=999, sira=0, ksira;
	
	
	for( i=0; i<10; i++)
	{
		
		sira++;
		if(sayi<enksayi)
		{
			enksayi=sayi;
			ksira=sira;
		}
	}
	printf("En kucuk sayi %d sira numarasi %d", enksayi, ksira);
	return 0;
}


