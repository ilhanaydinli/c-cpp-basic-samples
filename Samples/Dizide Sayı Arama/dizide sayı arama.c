#include <stdio.h>
main()
{
	int dizi [3][2]={10,1,3,8,7,4};
	int i,j,aranan;
	printf("Sayi giriniz");
	scanf("%d",&aranan);
	for(i=0;i<3;i++)
	for(j=0;j<2;j++)
	if(aranan==dizi[i][j])
	{
		printf("Sayi %d %d konumunda bulundu",i,j);
		return 0;
	}
	printf("Sayi %d dizide bulunamadi",aranan);
	
	return 0;
}
