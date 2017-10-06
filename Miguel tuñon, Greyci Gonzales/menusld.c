#include<stdio.h>
#define  SLDIN 2000
void main ()
{
	int op=0,m;
	float ct,s=0,rt,rt1,r=0,versd,sld;
	
	do{system("cls");
	printf("1-Ingrese en cuenta\n");
	printf("2-Retiro\n");
	printf("3-Ver saldo de la cuenta\n");
	scanf("%d",&op);
	system("cls");
	
	switch(op)
	{
		case 1:
			printf("Ingrese la cantidad de dinero\n");
			scanf("%f",&ct);
			
			s=SLDIN+ct;
			
			printf("El saldo ingresado es:%.2f\n",ct);
			printf("EL saldo total es:%.2f\n",s);
		break;
		case 2:
			printf("Ingrese la cantidad a retirar\n");
			scanf("%f",&rt);
			
			if(rt>SLDIN)
			{
			    printf("Ingrese la cantidad a retirar\n");
			    scanf("%f",&rt);
			}else
			    r=SLDIN-rt;
			    printf("El saldo en su cuenta es:%.2f\n",r);
		break;
		case 3:
			printf("El saldo en su cuenta es:%d\n",SLDIN);
		break;
		default:
			printf("No valido.");
	}
	    printf("1-Desea continuar\n");
	    printf("0-Salir del programa\n");
	    scanf("%d",&m);
    }while(m!=0);
}
