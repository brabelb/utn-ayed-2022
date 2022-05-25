/*
 * Estado      : Terminado
 * Name        : AyED-Ejercicio-2.cpp
 * Author      : Brian Mamani
 * Version     : -
 * Atajos      :   >>, <<, \n,
 * Copyright   : Your copyright notice
 * Description : Dado un conjunto de triángulos representados por sus lados L1, L2 y L3 que finaliza con un triángulo
 con un lado nulo, determinar e imprimir la cantidad de triángulos equiláteros, isósceles y escalenos.
 */

#include <iostream>
using namespace std;

int main() {

	int cantEqu = 0; //equilatero
	int cantIso = 0; //isosceles
	int cantEsc = 0; //escaleno

	float l1;
	cin >> l1;
	float l2;
	cin >> l2;
	float l3;
	cin >> l3;

	while (l1 != 0 && l2 != 0 && l3 != 0) {

		if (l1 == l2 && l2 == l3 ) {
			cantEqu++;
		}

		if (l1 != l2 && l2 != l3 && l1 != l3) {
			cantEsc++;
		}

		if ( (l1 == l2 && l1 != l3) || (l1 == l3 && l1 != l2) || (l2 == l3 && l1 != l2) ) {
			cantIso++;
		}

		cin >> l1;
		cin >> l2;
		cin >> l3;

	}

	cout << "Cantidad de equilateros: " << cantEqu << endl;
	cout << "Cantidad de isosceles: " << cantIso << endl;
	cout << "Cantidad de escalenos: " << cantEsc << endl;

	return 0;
}
