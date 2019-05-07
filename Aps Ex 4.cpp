#include <stdio.h> 
#include <stdlib.h>
int main() { 
	char nome[10][50]; 
	float nota[10][2], media; 
	int i;
	
	for (i=0; i<10; i++) {
		printf("Favor informar o nome do aluno %d: ", i+1); 
		gets(nome[i]);
	} 
	for (i=0; i<10; i++) {
		printf("Informe as 2 notas do aluno %d: ", i+1);
		scanf("%f %f", &nota[i][0], &nota[i][1]); 
		media = (nota[i][0] + nota[i][1]) / 2; 	
		printf("\n\t%s", nome[i]);
		printf("\nNota 1 --> %.f", nota[i][0]);
		printf("\nNota 2 --> %.f", nota[i][1]);
		printf("\nMedia --> %.f", media);
	if (media >= 7) 
		printf("\t\nAluno aprovado\n"); 	
	else 	
	if (media >= 4) 	
		printf("\tPrecisa de %.f na terceira prova\n", 14 - media); 	
	else 	
		printf("\tReprovado\n"); 
	} 
	return 0; 
}
