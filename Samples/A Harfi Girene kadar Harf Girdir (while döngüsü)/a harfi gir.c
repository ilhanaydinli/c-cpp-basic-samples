#include <stdio.h>

main()
{
	
	char a;
	
	while(a != 'A' && a !='a')
	{
		printf("Bir harf giriniz \n");
		scanf("%s", &a);
		printf("%c harfi giriniz \n", a);
	}
	printf("Aaaaa harfi girdiniz!!!");
	return 0;
}


