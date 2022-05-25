/*
 * Estado      : Terminado
 * Name        : AyED-Ejercicio-1_2.cpp
 * Author      : Brian Mamani
 * Version     : -
 * Atajos      :   >>, <<, \n,
 * Copyright   : Your copyright notice
 * Description : Dado un conjunto de valores enteros, calcular e imprimir:
 a) cuantos valores cero hubo b) promedio de los valores positivos c) sumatoria de valores negativos
 2) N valores, donde el valor de N debe ser leído previamente.
 */

#include <iostream>
using namespace std;

int valor;										//declaracion de variables
int cantCeros = 0;
int sumaNumPositivos = 0;
int sumaNumNegativos = 0;
int cantNumPositivos = 0;
float promedio;

int main() {

	int n; //variable para finalizar programa
	cin >> n;

	for (int i = 1; i <= n; i++) {				  //condicion de bucle hasta 167
		cout << "Ingrese un valor: ";				//salida por pantalla
		cin >> valor;	    						//almacenamiento de ingreso

		if (valor == 0) {
			cantCeros++;						   //incrementa 'cantCeros' en 1
		}

		if (valor > 0) { //es positivo
			cantNumPositivos++;
			sumaNumPositivos += valor;
		}

		if (valor < 0) { // es negativo
			sumaNumNegativos += valor;
		}
	}

	cout << "\nCantidad de ceros: " << cantCeros << endl; //salida por pantalla

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
