#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
void P(float numero, int potencia){
	float x=numero;
	for(int i=potencia;i>1;i--){
		x=numero*x;
	}printf("[>] Resultado: %.1f",x);
}
main(){
	int potencia;
	float numero;
	printf("[>] Numero: "); 
	scanf("%f",&numero);
	printf("[>] Potencia: ");
	scanf("%d",&potencia);
	P(numero,potencia);
}
