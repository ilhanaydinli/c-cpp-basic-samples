#include <stdio.h>
main()
{
	int dizi [3][2]={1,2,3,4,5,6};
	int i,j,aranan;
	printf("sayi giriniz");
	scanf("%d",&aranan);
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			if(aranan==dizi[i][j])
			printf("bulunan konum %d %d",i,j);
			return 0;
		}
	
	}
	printf("aradiginiz sayi dizide yok %d",aranan);
	return 0;
}
