/*
 * calculos.c
 *
 *  Created on: 6 sep. 2019
 *      Author: nicolas
 */
#include "calculos.h"

int getInt(int* numero){
	int num;
	printf("Por favor, indique el numero: ");
	scanf("%i",&num);
	num = *numero;

	return 0;
}

int multiplicacionDeDosInt (int numero1, int numero2, int* resultado){
	int num1;
	int num2;
	int multiplicacion;
	num1 = numero1;
	num2 = numero2;
	multiplicacion = numero1 * numero2;
	*resultado = multiplicacion;
	return 0;
}
int divisionDeDosInt (int numero1, int numero2, float* resultado){
	int retorno = -1;
	if (numero2 != 0){
		int num1;
		int num2;
		float division;
		num1 = numero1;
		num2 = numero2;
		division = numero1 / numero2;
		*resultado = division;
		retorno = 0;
	}else{

	}
	return retorno;
}
int restaDeDosInt (int numero1, int numero2, int* resultado){
	int num1;
	int num2;
	int resta;
	num1 = numero1;
	num2 = numero2;
	resta = numero1 - numero2;
	*resultado = resta;
	return 0;
}
int sumaDeDosInt (int numero1, int numero2, int* resultado){
	int num1;
	int num2;
	int suma;
	num1 = numero1;
	num2 = numero2;
	suma = numero1 + numero2;
	*resultado = suma;
	return 0;
}
int factorialDeUnInt (int numero, int* resultado ){
	int i;
	int factorial = 1;
	for (i = 0 ; i <= numero ; i++){
		factorial *= i;
	}
	*resultado = factorial;
	return 0;
}
