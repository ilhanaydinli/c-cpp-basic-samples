#include <stdio.h>

main ()
	
	
{
	int x, y, z;
	
	printf("ilk sayý");
	scanf("%d", &x);
	printf("ikinci sayý");
	scanf("%d", &y);
	z = x % y;
	if( z==0 )
	{
		printf("Tam blnr");
	}
	else 
	{
		printf("tam bölünmez");
	}
	return 0;
}
