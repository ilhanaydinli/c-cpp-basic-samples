#include <stdio.h>

int main ()
{
	int i,sayi, toplam=0;
	printf("Tam sayi giriniz\n");
	scanf("%d", &sayi);
	for (i=1; i<sayi;i++)
	{
		toplam=toplam+i;
	}
	printf("ilk %d sayinin toplami =%d", sayi, toplam);
}
