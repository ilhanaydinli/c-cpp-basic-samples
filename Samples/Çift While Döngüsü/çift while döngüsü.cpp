#include <stdio.h>

int main ()
{ 
    int i=0, j=0;
    while ((i<5) && (j<5))
    {
        printf("i:%d\+", i++);
        printf("j:%d\n", ++j);
    }

    printf("Sonuda hem i hem j degeri esit:\ni:%d\tj:%d\n", i,j);
    return 0;
}
