#include<stdio.h>
#define SAL 2000
void main(){
	float cuenta,cantr, suma=0;
	int op=0, ops=0;
	
	printf("1-ingreso en cuenta\n");
	printf("2-retiro\n");
	printf("3- ver saldo\n");
	printf("4- salida\n");
scanf("%d",&op);
	
	switch(op)
	{
		case 1:
			printf("ingreso en cuenta\n");
	scanf("%f",&cuenta);
	
	
	suma= SAL+cuenta;
	
	printf(" el saldo ingresado es :%2f",cuenta);
	printf("saldo original es : %2f", suma);
	
	
	break;
	
	case 2:
	
	printf("ingres la cantidad a retirar\n");
	scanf("%f", &cantr);
	
	if(cantr<suma)
	{
		printf("ingrese la cantidad a retirar\n");
	}
	else
	printf("no ingreso\n");
	
	break;
	
	
	case 3:
	 suma= SAL+cuenta;
	printf("el saldo de la cuenta es: %f", suma);
	
	break;
	
	case 4:
	if (SAL==0)

	{
	
	printf("si ingresa 0\n");
	scanf("%d",&ops);}
	else
	
	printf(" SALIR DEL PROGRAMA\n");

	break;
	defaul:
		printf("no valido\n");
}
}
