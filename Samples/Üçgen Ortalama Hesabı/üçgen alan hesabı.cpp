#include <math.h>
#include <stdio.h>


int main ()

{ 

int u, a, b, c, alan;



printf("Ucgen kenar uzunluklarini giriniz");
scanf("%d %d %d", &a, &b, &c);

u=(a+b+c)/2;

alan=sqrt (u*(u-a) * (u-b) * (u-c));

printf("Ucgenin alani=%d\n" , alan);



return 0;

}
