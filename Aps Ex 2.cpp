#include<stdio.h>
#include<stdio.h>
 
int fatorialrecursiva(int x){
	int aux;	
	if(x <= 1)
		return (1);		
	else{
	aux = x * fatorialrecursiva(x-1);
	return (aux);
}
}

int fatorialrepeticao(int x){
	int cont;
	
	for(cont = 1; x > 1; x = x - 1)
		cont = cont * x;
		return (cont);
}

int main(){
int rec, n, res;

printf("Insira o numero ao qual deseja obter seu fatorial: ");
scanf("%d", &n);
printf("[1]Recursividade");
printf("\t\t\n[2]Estrutura de repeticao: ");
scanf("%d",&rec);

if(rec == 1){
	res = fatorialrecursiva(n);
	printf("Fatorial de %d feita por recursividade: %d",n,res);
}
else{
	if(rec == 2)
		res = fatorialrepeticao(n);
		printf("Fatorial de %d feita por repeticao : %d",n,res);
}	
}


