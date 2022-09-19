#include <iostream>
using namespace std;

int main(){
	double nota1, nota2, nota3, promedio;
	cout << "ingrese la primera nota: " << endl;
	cin >> nota1;
	cout << "ingrese la segunda nota: " << endl;
	cin >> nota2;
	cout << "ingrese la tercer nota: " << endl;
	cin >> nota3;
	promedio = (nota1 + nota2 + nota3)/3;
	if (promedio >= 7 and promedio <= 10){
		cout << "aprobado";
	} else if (promedio >= 4 && promedio < 7){
		cout << "regular";
	} else if (promedio > 0 && promedio < 4){
		cout << "reprobado";
	} else {
		cout << "nota no valida";
	}
}
