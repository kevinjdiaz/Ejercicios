#include <iostream>
using namespace std; 

long potenciaDE(int base, int exponente);
int main(){
	int base, exponente;
	long resultado;
	cout<<"Ingresar la base: "; cin>> base;
	cout<<"Ingresar el exponente: "; cin>>exponente;
	resultado = potenciaDE (base,exponente);
	cout<< "el resultado es: "<< resultado<<endl;
	return 0;
}

long potenciaDE(int base, int exponente){
	if(exponente !=1){
		return base * potenciaDE(base, exponente - 1);
	} else {
		return base;
	}
}

