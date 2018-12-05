#include <stdio.h>
//Nome:Lucas Vicente Rodrigues - Matricula: 0050016035
int main(){
	int matriz [4][4],soma,soma2,i,j,resultado;

		
	for(i=0;i<4;i++){
	
	  for(j=0;j<4;j++){
	 
	  printf("\n Digite o numero da linha %d, coluna %d:",i+1, j+1);
	  scanf("%d", &matriz[i][j]);
                      }      
 	                }
	soma=matriz[3][0]+matriz[3][1]+matriz[3][2]+matriz[3][3];
	soma2=matriz[0][2]+matriz[1][2]+matriz[2][2]+matriz[3][2];
	printf("\n%d",soma);
		printf("\n%d",soma2);
		resultado=soma+soma2;
		printf("\n%d",resultado);
	
	
	getch();
	return 0;
}
