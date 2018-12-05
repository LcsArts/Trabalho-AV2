#include<stdio.h>
//Nome:Lucas Vicente Rodrigues - Matricula: 0050016035
int main ()
{
	int objeto[3000], contador, minimo, quantidade=0;
	
	for(contador=0; contador<3000; contador++){
		printf("Coloque o peso do objeto %d em gramas:", contador+1);
		scanf("%d", &objeto[contador]);
	}
	minimo=objeto[0];
	for (contador=0; contador<3000; contador++){
		if(objeto[contador]<minimo){
			minimo=objeto[contador];
			quantidade=0;
		}
		else if(objeto[contador]==minimo){
			quantidade++;
		}
	}
	printf("O menor peso dos objetos e %d, existem %d objetos com esse peso.",minimo, quantidade);
	
    getch();
	return 0;
}
