#include "main.h"
#include <stdio.h>


int main (void)
{
    int suma;
    int res;
    int mul; 
    int div;
    
int n1=0;
int n2=0;

printf("Ingrese un numero:\n");
scanf("%d",&n1);

printf("Ingrese otro numero:\n");
scanf("%d",&n2);

    suma=add (n1,n2);
    res=resta(n1,n2);
    mul=multiplicacion(n1,n2);
    div=division(n1,n2); 
    printf("El valor de la suma es: %d\nEl valor de la resta es: %d\nEl valor de la multiplicacion es: %d\nEl valor de la divison es: %d\n",suma,res,mul,div); 


    return 0;
} 
