#include <stdio.h>
#include <stdlib.h>

int main()
{
 int x,y;
 int matriz[3][3], matrizM[3][3];
 for (x=0; x<3; x++){
 	for (y=0; y<3;y++){
	 printf("Digite um numero inteiro para a posicao %d,%d: ",x,y);
	 scanf("%d", &matriz[y][x]);
 }
 }
 printf("\nMATRIZ ORIGINAL MULTIPLICADA POR 5:\n");
 for (x=0;x<=2;x++){
 for (y=0;y<3;y++){
 matrizM[x][y] = (matriz[x][y])*5;
}
}
 printf("\n\n");
 for (y=0;y<=2;y++){
 for (x=0;x<3;x++)
 printf("%d\t",matrizM[x][y]);
 printf("\n\n");
 }
 
}
