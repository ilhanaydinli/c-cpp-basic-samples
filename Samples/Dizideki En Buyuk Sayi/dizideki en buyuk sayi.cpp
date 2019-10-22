#include <stdio.h>

main()
{
	int sayi[10] = { 81, 2, 0, 75, 82, 40, 10, 36, 5, 37 }, enbsayi, i;
	enbsayi = sayi[0];
	for (i = 0; i<10; i++)
	{

		if (sayi[i]>enbsayi)
		{
			enbsayi = sayi[i];
		}
	}
	printf("Dizideki en buyuk sayi=%d", enbsayi);
	getchar();
}
