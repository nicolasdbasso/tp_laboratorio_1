/*
 ============================================================================
 Name        : NicolasBasso_TP01.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"



int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	int opcion;
	int numero1;
	int numero2;
	int suma;
	int resta;
	int multiplicacion;
	int factorial1;
	int factorial2;
	float division;
	printf("1.Ingresar 1er operando (A=x)\n2.Ingresar 2do operando (B=y)\n3.Calcular todas las operaciones\n\ta)Calcular la suma (A+B)\n\tb)Calcular la resta (A-B)\n\tc)Calcular la division (A/B)\n\td)Calcular la multiplicacion (A*B)\n\te)Calcular el factorial (A!)\n4.Informar resultados\n\ta)“El resultado de A+B es: r”\n\tb)“El resultado de A-B es: r”\n\tc)“El resultado de A/B es: r” o “No es posible dividir por cero”\n\td)“El resultado de A*B es: r”\n\te)“El factorial de A es: r1 y El factorial de B es: r2”\n5.Salir");
	do{
		scanf("%i",&opcion);
		switch(opcion){
		case 1:
			getInt(&numero1);
			break;
		case 2:
			getInt(&numero2);
			break;
		case 3:
			multiplicacionDeDosInt (numero1, numero2, &multiplicacion);
			sumaDeDosInt (numero1, numero2, &suma);
			restaDeDosInt (numero1, numero2, &resta);
			if (divisionDeDosInt (numero1, numero2, &division) == 0){

			}else{
				division = 0;
			}
			factorialDeUnInt(numero1, &factorial1);
			factorialDeUnInt(numero2, &factorial2);
			break;
		case 4:
			if (division != 0){
				printf("a)“El resultado de A+B es: %i\nb)“El resultado de A-B es: %i\nc)“El resultado de A/B es:%f\nd)“El resultado de A*B es: %i\ne)“El factorial de A es: %i y El factorial de B es: %i”",suma, resta, division, multiplicacion, factorial1, factorial2);
			}else{
				printf("a)“El resultado de A+B es: %i\nb)“El resultado de A-B es: %i\nc)“No se puede dividir por 0\nd)“El resultado de A*B es: %i\ne)“El factorial de A es: %i y El factorial de B es: %i”",suma, resta, multiplicacion, factorial1, factorial2);
			}

			break;
		}
	}while(opcion < 0 || opcion > 5);
}
