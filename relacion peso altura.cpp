/* Hacer un programa que pida:
- nombre
- Fecha de nacimiento
- Peso
- Altura
-----------------------
Resultado:
Si el peso va con la altura (peso normal)
Si el peso esta por arriba de 20 kilos (peso moderado)
Si el peso esta por arriba de 40 kilos (obeso)
Si el peso esta por debajo de 20 kilos (peso bajo)
Si el peso esta por debajo de 40 kilos(anorexico) */

#include <iostream>
#include <math.h>

using namespace std;

string name, sname;
int dia, mes, ano; /* ano = año */
int peso, metro, centimetro;
int moderado, obeso, bajo, anorexico;


main () {
	
	cout << " ============================================= " << endl;
	cout << " PROGRAMA PARA DETERMINAR RELACION PESO/ALTURA " << endl;	
	cout << " ============================================= " << endl;
	
	cout << "\nDigite su nombre: ";
	cin >> name;
	cout << "Digite su apellido: ";
	cin >> sname;
	cout << "Digite su fecha de nacimiento (en digitos)" << endl;
	
	cout << "\nDia: ";
	cin >> dia;
	cout << "Mes: ";
	cin >> mes;
	cout << "Año: ";
	cin >> ano;
	
	cout << "\nDigite su peso (Basado en kilogramos): ";
	cin >> peso;
	
	cout << "\nCuantos metros mide usted?: ";
	cin >> metro;
	cout << "Con cuantos centimetros?: ";
	cin >> centimetro;
	
	cout << "\n=========================================" << endl;
	
	/* Entregar datos  */
	
	cout << "\nNombre y apellido: " << name;
	cout << " " << sname << endl;
	cout << "\nFecha de nacimiento: " << dia;
	cout << "/" << mes;
	cout << "/" << ano;
	cout << "\nPeso (en kg): " << peso << endl;
	cout << "\nAltura" << endl;
	cout << metro;
	cout << "." << centimetro;
	cout << " metros" << endl;

	cout << "\n=========================================" << endl;
	
	/* Determinar si es mayor o menor de edad */
	
	if (ano <= 2006 && mes <= 9 && dia <= 16) {
		
		cout << "\nEl individuo es mayor de edad";
		
	} else {
		
		cout << "\nEl individuo es menor de edad";
		
	} 
		
	/* determinar su estado de fatalidad
	moderado, obeso, bajo, anorexico 
	
	Si el peso va con la altura (peso normal)
	Si el peso esta por arriba de 20 kilos (peso moderado)
	Si el peso esta por arriba de 40 kilos (obeso)
	Si el peso esta por debajo de 20 kilos (peso bajo)
	Si el peso esta por debajo de 40 kilos(anorexico) */
	
	moderado = centimetro + 20;
	obeso = centimetro + 40;
	bajo = centimetro - 20;
	anorexico = centimetro - 40;
	
	if (peso == centimetro) {
		cout << "\nEl peso es normal" << endl;
	} else if (peso <= moderado ) {
		cout << "\nEl peso es moderado" << endl;
	} else if (peso <= obeso) {
		cout << "\nEl peso es obeso" << endl;
	} else if (peso >= bajo) {
		cout << "\nEl peso es bajo" << endl;
	} else if (peso >= anorexico) {
		cout << "\nEl peso es anorexico" << endl;
	}
	
	cout << "\n=========================================" << endl;

}
