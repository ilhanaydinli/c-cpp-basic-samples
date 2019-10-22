#include <stdio.h>           /* printf, scanf tanýmlarý buradadýr */

#define Kmde_Mil 0.6215      /* Dönüþtürme sabiti                 */

int main(void) {

      double km,    /* girdi - kilometre olarak uzaklýk */

             mil;   /* çýktý - mil olarak uzaklýk       */

 

      /* Uzaklýðý Km olarak alýn: */

      printf("Uzaklýðý Km olarak giriniz> ");

      scanf("%lf", &km);

      /* Uzaklýðý mile dönüþtürün: */

      mil = Kmde_Mil * km;

      /* Mil olarak sonucu gösterin: */

      printf("Bu mil olarak %f a eþittir.\n", mil);

      return (0);

}
