#include <stdio.h>

main()
{	int i=0, sayi=0, enksayi=999, sira=0, ksira;
	
	puts("Sayi giriniz");
	do
	{
		i++;
		scanf("%d", &sayi);
		sira++;
		if(sayi<enksayi)
		{
			enksayi=sayi;
			ksira=sira;
		}
	}
	while(i<10);
	printf("En kucuk sayi=%d sira numarasi=%d", enksayi, ksira);
	return 0;
}
