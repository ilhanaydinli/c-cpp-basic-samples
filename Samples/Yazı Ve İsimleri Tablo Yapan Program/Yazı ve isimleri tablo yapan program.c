#include <stdio.h>

main()

{
	int i;
	char ad [4] [8] ={"Truva","Jaqquin","Kerem","Firat"};
	int kilo [4] ={30,32,10,13};
	float boy[4] ={1.17,1.00,0.45,0.55};
	printf("\nİsim\tKilo\tBoy\n");
	for(i=0;i<4;i++)
	printf("%s\t%d\t%1.3f\n",ad[i],kilo[i],boy[i]);
	return 0; 


}
