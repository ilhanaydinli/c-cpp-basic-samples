#include <stdio.h>

int main ()
	
	
{
	int nt, baraj;
	
	printf("Notunuzu giriniz: \n nt:");
	scanf("%d", &nt);
	printf("Barajý giriniz: \n baraj: ");
	scanf("%d", &baraj);
	
	if( nt == baraj )
	{
		printf("Nt ve baraj eþit");
	}
	else if( nt < baraj )
	{
		printf("Kaldýnýz.");
	}
	else if( nt > baraj )
	{
		printf("geçtiniz.");
	}
	return 0;
}
