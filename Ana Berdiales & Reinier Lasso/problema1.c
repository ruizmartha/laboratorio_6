#include<stdio.h>
#define SALDO 2000
void main ()
{
float ingreso, retiro, sal2;
int num=1;
printf ("Bienvenido \n");
printf ("Escoja una opcion \n");
printf("1.Ingreso de cuenta\n2.Retiro\n3.Saldo de cuenta\n0.Salida\n");
scanf("%d",&num);
if(num>3)
	    printf("Numero no valido\n");
	    else
	    {
switch (num)
{
	
		case 1:
		printf("Introduzca monto a depositar \n");
		scanf("%f",&ingreso);
		sal2=SALDO+ingreso;
		printf("Su nuevo saldo es: %.2f", sal2);	
	    break;
	case 2: 
	    if (ingreso <=SALDO)
	    {
	    printf ("Ingrese monto a retirar \n");
	    scanf("%f", &ingreso);
	    sal2=SALDO-ingreso;
	    printf("Su saldo es: %.2f",sal2);
		}
	    else
	    printf("Saldo insuficiente, ingrese nuevamente el monto a retirar");
	    break;
	case 3: 
	    printf ("Su saldo es:%d", SALDO);
	    break;
	}
	    	
}

	
}
