#include<stdio.h>
void main(){
	int vin,cont,vfin,total,i ,rslt;
	
	 printf("introduzca valor inicial:  ");
	 scanf("%d",&vin);
	 printf("introduzca valor final:  ");
	 scanf("%d",&vfin);
	 printf("introduzca valor del contador:  ");
	 scanf("%d",&cont);
	 for(i=vin;vin<vfin;i++)
	  {
		cont++; 
	    printf("\n %d \n ",cont);

	  }
	 
}
