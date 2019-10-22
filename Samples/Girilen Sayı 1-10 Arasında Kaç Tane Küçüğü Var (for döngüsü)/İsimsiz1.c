#include <stdio.h>

main()

{   
    int i,n;
    	
		printf("Bir sayi giriniz: ");
    	scanf("%d", &n);
   
    if(n>10)
	{
		printf("%d sayisi 10 veya 10 dan kucuk bir sayi olmali !", n);
	}	
	else
	{
		for( i=1; i<n; i=i+1 )
    	{
    		printf("Sayilan Sayi=%d\n", i);
    	
		}
			printf("1 ile 10 arasinda %d sayisindan kucuk %d sayi var.", n, i-1);
	}
    return 0;
}
