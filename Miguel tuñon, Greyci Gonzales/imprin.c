#include<stdio.h>
void main()
{
	int n,f,i=0;
	
	printf("Ingrese un valor inicial\n");
	scanf("%d",&n);
	printf("Ingrese un valor final\n");
	scanf("%d",&f);
	printf("Ingrese el contador\n");
	scanf("%d",&i);
	
	for(i=0;i<=f;i+=1+i)
	{
		printf("%d\n",i);
	}
}
