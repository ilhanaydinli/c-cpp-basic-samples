#include <stdio.h>

int main()

 {
	int sayi,x;
	
	printf ("Sayi giriniz\n");
	scanf ("%d", &sayi);
	if (sayi>10)
	{
		x=sayi/2;
		printf ("Girdiginiz sayi %d 10dan buyuktur %d", sayi,x);
	}
	else
	{
		x=sayi*sayi;
		printf ("Girdiginiz sayi %d 10 dan kucuktur %d", sayi, x);
	}
	return 0;
	
}

