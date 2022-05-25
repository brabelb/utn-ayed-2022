/*
 * Estado      : Terminado
 * Name        : AyED-Ejercicio-1_4.cpp
 * Author      : Brian Mamani
 * Version     : -
 * Atajos      :   >>, <<, \n,
 * Copyright   : Your copyright notice
 * Description : Dado un conjunto de valores enteros, calcular e imprimir:
 a) cuantos valores cero hubo b) promedio de los valores positivos c) sumatoria de valores negativos
4) Se dan N valores, pero el proceso deber finalizar si se procesan todos los valores o la cantidad de
ceros supera a cuatro.
 */

#include <iostream>
using namespace std;

int main() {

	int N;
	cin >> N;

	int cantCeros = 0;
	int sumPositivos = 0;
	int sumNegativos = 0;
	int cantPositivos = 0;

	int i=1;

	while( (i<=N) && (cantCeros < 4) ){
		int valor;
		cin >> valor;

		if (valor == 0) {
			cantCeros++;
		}

		if (valor > 0) { //es positivo
			cantPositivos++;
			sumPositivos += valor;
		}

		if (valor < 0) { // es negativo
			sumNegativos += valor;
		}

		i = i+1;
	}

	cout << "\nCantidad de ceros: " << cantCeros << endl; //salida por pantalla

	if (cantPositivos != 0) { //condicion para hallar el promedio de positivos
		float promedio = sumPositivos / cantPositivos;
		cout << "Promedio de positivos: " << promedio << endl;
	} else {
		cout << "No hubo valores positivos, no se puede calcular el promedio" << endl;
	}

	cout << "Sumatoria de valores negativos: " << sumNegativos << endl;

	return 0;
}
