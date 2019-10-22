#include <stdio.h>
int main () {
	int dizi [3][3]= {10, 1, 3, 8, 7, 4};
	int i, j, aranan= 8;
	for (i=0; i<3; i++)	
	{/* Sat�r dizini */
	   for (j=0; j<3; j++)
	{	/* S�tun dizini */
		if ( aranan == dizi[i][j]) 
		{ 
			printf("Sayi %d, %d konumunda bulundu",  i, j); 
		}
	}
}
	printf ("Sayi %d dizide bulunmadi.", aranan);
	return 0;
}

