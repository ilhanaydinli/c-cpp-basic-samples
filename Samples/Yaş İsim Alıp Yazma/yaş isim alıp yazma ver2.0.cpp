#include <stdio.h>
main ()
{
	int i,k,yas[5];
	char ad[5] [8];
	
	for (k=0;k<5;k++)
	{
		printf ("%d. isim=",k+1);
		scanf ("%s",ad [k]);
		printf ("%d. yas=",k+1);
		scanf ("%d",&yas [k]);
	
	}
		printf("\nIsim\tYas\n");
	
	for (i=0;i<5;i++)
	{
		printf ("%s\t%d\n",ad[i],yas[i]);
	}
		return 0;
}
