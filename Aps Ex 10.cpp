#include<stdlib.h>
#include<string.h>
#include<iostream>

using namespace std;

typedef struct
{
	char nome[50],mail[100],tel[15];
	int idade;
} Pessoa;

Pessoa ctt[100];
int i=0;

void Cadastrar(){
	system("cls");
	cout<<"Cadastrar Contatos"<<endl;
	if(i<100){
		
		cout<<"Nome: "; 
		cin>>ctt[i].nome;
		
		cout<<"Idade: "; 
		cin>>ctt[i].idade;
		
		cout<<"Telefone: "; 
		cin>>ctt[i].tel;
		
		cout<<"E-mail: "; 
		cin>>ctt[i].mail;
	i++;	
	}	
	else
		cout<<"Agenda Lotada"<<endl<<endl;
	system("pause");
}
void Buscar(){
	char nome[50];
	system("cls");
	cout<<"Buscar Contato"<<endl;
	if(i>0){
		cout<<"Nome para pesquisa: "; cin>>nome;
		for(int j=0;j<i;j++){
			if(strcmp(nome,ctt[j].nome)==0){
				cout<<"Nome: "<<ctt[j].nome<<endl;
				cout<<"Idade: "<<ctt[j].idade<<endl;
				cout<<"Telefone: "<<ctt[j].tel<<endl;
				cout<<"E-mail: "<<ctt[j].mail<<endl;
				cout<<"-----------------------------"<<endl<<endl;
			}
		}
	}
	else
		cout<<"Agenda Vazia"<<endl<<endl;
	system("pause");	
}

void Exibir(){
		system("cls");
	cout<<"Exibir Contatos"<<endl;
	cout<<" "<<endl;
	if(i>0){
		for(int k=0; k<i; k++){
	    cout<<"Nome: "<<ctt[k].nome<<endl;
	    cout<<"Idade: "<<ctt[k].idade<<endl;
	    cout<<"Telefone: "<<ctt[k].tel<<endl;
	    cout<<"E-mail: "<<ctt[k].mail<<endl;
	    cout<<" "<<endl;
	    }
    }
    else
    cout<<"Contatos inexistentes para serem exibidos."<<endl;
	cout<<" "<<endl;
    system("pause");
}

main(){
	int op;
	do{
		system("cls");
		cout<<"Agenda De Contatos"<<endl;
		cout<<"[1] Cadastrar Contato"<<endl;
		cout<<"[2] Pesquisar Contato"<<endl;
		cout<<"[3] Exibir todos Contatos"<<endl;
		cout<<"[0] Sair"<<endl;
		cout<<" Opcao : "; cin>>op;
		switch(op){
			case 1: Cadastrar(); break;
			case 2: Buscar (); break;
			case 3: Exibir(); break;
		}
	}while(op!=0);
}
