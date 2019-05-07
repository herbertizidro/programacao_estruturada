#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
main(){
	FILE *arq;
	char nome[50];
	int i, soma,num, numimpar=0;
	arq = fopen("dados.dat", "w");
	cout<<"\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
	cout<<"\t\t\tNUMEROS PARES !!"<<endl;
	cout<<"\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
	for (int i=1; i<=100/2; i++) {
        cout<<"Numero par: "<<i*2<<endl;
        soma+=i*2;
    	cout<<"\n Soma dos pares: "<<soma<<"\n"<<endl;
	}
	soma = 0;
	cout<<"\n\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
	cout<<"\t\t\tNUMEROS IMPARES !!"<<endl;
	cout<<"\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
	for (int i=1; i<50; i++) {		
		if(i%2!=0){
		numimpar=i;
		cout<<"Numero impar: "<<numimpar<<endl;
		soma+= numimpar;
    	cout<<"\nSoma dos impares: "<<soma<<"\n"<<endl;
}
fclose(arq);
}
}
