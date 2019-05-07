#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>

using namespace std;

FILE *a;

  char arquivo[50], nome[50], sexo[50], endereco[150];
	int idade, telefone;

main(){
	

	system("cls");
	cout<<"Gravar no Arquivo externo"<<endl;
	cout<<"Nome do Arquivo externo: ";
	cin>>arquivo;
	strcat(arquivo,".txt");
	cout<<"Seu nome: "; cin>>nome;
	cout<<"Sua idade: "; cin>>idade;
	cout<<"Seu sexo: "; cin>>sexo;
	cout<<"Seu endereco: "; cin>>endereco;
	cout<<"Seu telefone: "; cin>>telefone;
	a = fopen(arquivo,"w");
	fprintf(a,"Nome : %s",nome);
	fprintf(a,"\nIdade : %d",idade);
	fprintf(a,"\nSexo : %s",sexo);
	fprintf(a,"\nEndereco : %s",endereco);
	fprintf(a,"\nTelefone : %d",telefone);
	fclose(a);
	system("pause");

	cout<<"Ler o Arquivo externo"<<endl;
	cout<<"Nome do Arquivo externo: ";
	cin>>arquivo;
	strcat(arquivo,".txt");
	
	a = fopen(arquivo,"r");
	if (a==NULL)
		cout<<"Arquivo nao existe: (" ;
		else{
			fseek(a,7,0);
			fscanf(a,"%s\n",nome);
			fseek(a,8,1);
			fscanf(a,"%d\n",&idade);
			fseek(a,7,1);
			fscanf(a,"%f\n",sexo);
			fseek(a,11,1);
			fscanf(a,"%d\n",&telefone);
			fseek(a,6,1);
			fscanf(a,"%s\n",endereco);
			cout<<"Nome: "<<nome<<endl;
			cout<<"Idade: "<<idade<<endl;
			cout<<"Sexo: "<<sexo<<endl;
			cout<<"Endereco: "<<endereco<<endl;
			cout<<"Telefone: "<<telefone<<endl;
		}
	fclose(a);
	system("pause");
}
