/*
 * Estado      : Terminado
 * Name        : AyED-Ejercicio-1.1.cpp
 * Author      : Brian Mamani
 * Version     : -
 * Atajos      :   >>, <<, \n,
 * Copyright   : Your copyright notice
 * Description : Dado un conjunto de valores enteros, calcular e imprimir:
 a) cuantos valores cero hubo b) promedio de los valores positivos c) sumatoria de valores negativos
 1) 167 valores enteros.
 */

#include <iostream>
using namespace std;

int valor = 0;										//declaracion de variables
int cantCeros = 0;
int sumaNumPositivos = 0;
int sumaNumNegativos = 0;
int cantNumPositivos = 0;
float promedio;

int main() {

	for (int i = 1; i <= 167; i++) {				//condicion de bucle hasta 167
		cout << "Ingrese un valor: ";				
		cin >> valor;	    						//almacenamiento de ingreso

		if (valor == 0) {
			cantCeros++;						//incrementa 'cantCeros' en 1
		}

		if (valor > 0) { //es positivo
			cantNumPositivos++;
			sumaNumPositivos += valor;
		}

		if (valor < 0) { // es negativo
			sumaNumNegativos += valor;
		}
	}

	cout << "\nCantidad de ceros: " << cantCeros << endl; 

	if (cantNumPositivos != 0) { //condicion para hallar el promedio de positivos
		promedio = sumaNumPositivos / cantNumPositivos;
		cout << "Promedio de positivos: " << promedio << endl;
	} else {
		cout << "No hubo valores positivos, no se puede calcular el promedio"
				<< endl;
	}

	cout << "Sumatoria de valores negativos: " << sumaNumNegativos << endl;

	return 0;
}
