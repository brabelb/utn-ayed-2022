/*
 * Estado      : Terminado
 * Name        : AyED-Ejercicio-1_3.cpp
 * Author      : Brian Mamani
 * Version     : -
 * Atajos      :   >>, <<, \n,
 * Copyright   : Your copyright notice
 * Description : Dado un conjunto de valores enteros, calcular e imprimir:
 a) cuantos valores cero hubo b) promedio de los valores positivos c) sumatoria de valores negativos
 3) El conjunto de valores termina con un valor igual al anterior
 */

#include <iostream>
using namespace std;

int main() {

	int cantCeros = 0;
	int sumNegativos = 0;
	int cantPositivos = 0;
	float sumPositivos = 0;

	int valorAnterior;
	int valor;
	cin >> valor;

	do{
		if (valor == 0){
			cantCeros++;
		}
		if (valor > 0 ){ // es positivo
			cantPositivos++;
			sumPositivos += valor;
		}
		if (valor < 0){ // es negativo
			sumNegativos += valor;
		}

		valorAnterior = valor;
		cin >> valor;
	}while(valor != valorAnterior);

	cout << "Hubo" << cantCeros << "ceros" << endl;

	if (cantPositivos != 0){
		float promedio = sumPositivos / cantPositivos;
		cout << "Promedio de positivos: " << promedio << endl;
	} else {
		cout << "No hubo valores positivos, no se puede calcular el promedio" << endl;
	}

	cout << "Sumatoria de negativos: " << sumNegativos << endl;

	return 0;
}
