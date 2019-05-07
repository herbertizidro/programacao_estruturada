#include <stdio.h>
#include <stdlib.h>


int main(){
	int i,x,y,z,matriz[4][4];
	for(i=0;i<4;i++){
		for(y=0;y<4;y++){
			printf("Digite um numero inteiro para a linha %d e para a coluna %d: ",i,y);
			scanf("%d",&matriz[i][y]);
		}
	}
	for(i=0;i<4;i++){
   		for(y=0;y<4;y++){
       		printf("%d\t", matriz[i][y]);
   		}
   			printf("\n");
}
	for(x=0;x<4;x++){
		printf("\nDiagonal Principal: %d", matriz[x][x]);
}
printf("\n");
	for(x=0;x<4;x++){
		for(z=0;z<4;z++){
			if((x+z)==3)	
				printf("\nDiagonal Secundaria: %d", matriz[x][z]);
}
}
}
