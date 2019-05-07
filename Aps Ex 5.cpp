#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

float v[40];
int i;

void Faixa1(){
	cout<<"Numero ["<<i+1<<"] Na "<<"Faixa 1 [1-100]: ";
}

void Faixa2(){
	cout<<"Numero ["<<i+1<<"] Na "<<"Faixa 2 [200-450]: ";
}

void Faixa3(){
	cout<<"Numero ["<<i+1<<"] Na "<<"Faixa 3 [501-745.5]: ";
}

void Faixa4(){
	cout<<"Numero ["<<i+1<<"] Na "<<" Faixa 4 [800.5-920.9]: ";
}

main(){
	int cont1=0, cont2=0, cont3=0, cont4=0, cont5=0;
	cout<<"Digite 40 numeros para saber qual faixa ele pertence: "<<endl;
	for (i=0;i<40;i++){
		cout<<"Numero de colocacao ["<<i+1<<"]: ";
		cin>>v[i];	
	}
	system("pause");
	cout<<"------------------ Numeros Armazenados --------------------"<<endl<<endl;
	for (i=0;i<40;i++){
		cout<<"Elemento["<<i+1<<"]: "<<v[i]<<endl;
	}
	cout<<endl<<"----------------Faixas Distintas de Cada Numero ---------------"<<endl<<endl;	
		for (i=0;i<40;i++){
		if(v[i]>=1 && v[i]<=100){
			cout<<v[i]<<endl;
			cont1++;
		}
		else if(v[i]>=200 && v[i]<=450){
			cout<<v[i]<<endl;
			cont2++;
		}
		else if(v[i]>=501 && v[i]<=745.5f){
			cout<<v[i]<<endl;
			cont3++;
		}
		else if(v[i]>=800.5f && v[i]<=920.9f){
			cout<<v[i]<<endl;
			cont4++;
		}
		else{
			cout<<"Numero armazenado em ["<<i+1<<"] nao pertence a nenhuma faixa."<<endl;
			cont5++;
		}
	}
	cout<<endl<<"----------- Quantidade de Numeros em cada faixa -----------"<<endl<<endl;	
	cout<<"Numeros na Faixa 1: "<<cont1;
	cout<<endl<<"Numeros na Faixa 2: "<<cont2;
	cout<<endl<<"Numeros na Faixa 3: "<<cont3;
	cout<<endl<<"Numeros na Faixa 4: "<<cont4;
	cout<<endl<<"Numeros em nenhuma faixa: "<<cont5<<endl<<endl;
	system("pause");
}
