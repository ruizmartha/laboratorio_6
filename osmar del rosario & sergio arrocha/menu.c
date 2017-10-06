#include<stdio.h>
#define CANT 2000
void main(){
	float ingreso=0,rsl=0,retiro=0;
	int opcion;
	printf("introzca 1 para la cantidad a ingresar \n");
	
	printf("introzca 2 para la cantidad a retirar\n");
	
	printf("introzca 3 para el saldo en la cuenta\n");
	
	printf("introzca 0 para salir\n");
	  
	  	printf("introduzca una opcion ");
	scanf("%d",&opcion);
	
	
	   switch(opcion)
	   {
	   	case 1:
	    	printf("introdusca la cantida de ingreso ");
	          scanf("%f",&ingreso);
	   		
			    rsl=CANT+ingreso;
			    
			printf("su saldo es de:%.1f",rsl);
	          break;

	          case 2: 
	          do{
			  
	            	printf("introdusca la cantida a retirar ");
	                 
					  scanf("%f",&retiro);
	                   
	                   if(retiro<CANT){
	                   	 
							rsl=CANT-retiro;
							
					printf("su saldo es de:%.1f",rsl);
					}
					
				
					}while( CANT!=retiro);
					
					printf("su saldo no es suficiente para el retiro");
					
                    break;
                    
					 case 3:
					 	printf("su saldo es de:  %d",CANT);
					 	
					break;
					
						if(0!=opcion)
					break;
				default: ("opcion no valida");
	                  
	   }
}
	  
