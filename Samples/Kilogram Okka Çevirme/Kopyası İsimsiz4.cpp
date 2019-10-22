#include <stdio.h>
#define klgrm_okka 0.78003120124805

int main()
{   
    double klgrm, snc;
    	
		printf("Kilogram miktarini giriniz: ");
    	scanf("%lf", &klgrm);
    
	if ( klgrm >= 10 && klgrm <= 50 )
    {
    	snc = klgrm_okka * klgrm;
    	printf("%f kilogram %f okka yapmaktadir.", klgrm, snc);
	}
	else
	{
		printf ("Girdiginiz %f kilogram degeri 10 ile 50 kilogram arasinda degildir.", klgrm);
	}
    return 0;
}

