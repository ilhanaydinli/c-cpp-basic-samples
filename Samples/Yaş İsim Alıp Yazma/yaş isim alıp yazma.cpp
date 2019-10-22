#include <stdio.h>

main()

{
	int i,yas[5];
	char ad [5] [8];
	for(i=0;i<5;i++)
	{
		printf("İsim giriniz:");
		scanf("%s",ad[i]);
	}
	
		for(i=0;i<5;i++)
	{
		printf("Yas giriniz:");
		scanf("%d",&yas[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\nİsim\tYas\n");
		printf("%s\t%d\n",ad[i],yas[i]);
	}
	
	
	return 0;
}
