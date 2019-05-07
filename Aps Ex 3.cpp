#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
int maior=0, menor, soma=0;
void op(int x, int i){
	if(i==0)
		menor=x;
	if(x>=0){
		if(x>maior)
			maior=x;
		if(x<menor)
			menor=x;
		soma+=x;
	}	
}
main(){
	int n,i=0;
	float media;
	cout<<"Para comparar numeros entre maior e menor \n";
	while(n>=0){
		cout<<"Digite um numero: ";
		cin>>n;
		op(n,i);
		i++;
	}
	media= soma/(i-1);
	cout<<"Maior: "<<maior<<endl;
	cout<<"Menor: "<<menor<<endl;
	cout<<"Soma: "<<soma<<endl;
	cout<<"Media: "<<media<<endl;
	return 0;
}
