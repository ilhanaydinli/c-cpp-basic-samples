#include <stdio.h>

int main()
{
	int nott[10],toplam=0,k;
	float ort;
	
	for(k=0;k<10;k++)
	{
		printf("%d oge=", k+1);
		scanf("%d", &nott[k]);
	}
	for(k=0;k<10;k++)
	{
		toplam +=nott[k];
		ort=toplam/10.0;
		printf("Sayilarin ortalamasi %f dir",ort);
		return 0;
	}
}
