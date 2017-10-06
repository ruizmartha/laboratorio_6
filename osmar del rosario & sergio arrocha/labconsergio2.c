#include<stdio.h>
void main(){
	int i, n, f;

printf("introduzca el valor inicial \t");
scanf("%d", &n);
printf("introduzca el contador \t");
scanf("%d", &i);
printf("introduzca el valor final \t");
scanf("%d", &f);
do{
	n=i-n;
	i++;	
printf("%d \n", n);
	}while(i<=f);

}


