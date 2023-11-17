/*
 ============================================================================
 Name        : VectoresEjemplo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "matrices.h"

int dimensionFila(){
	int filas;
do {
	printf("Introduce el número de filas (Entre 1 y %d): ", MAX);
	fflush(stdout);
	scanf("%d", &filas);
}while(filas<=0 || filas >MAX);
	return filas;
}

int dimensionColumna(){
	int cols;
	do {
		printf("Introduce el número de cols (Entre 1 y %d): ", MAX);
		fflush(stdout);
		scanf("%d", &cols);
	}while(cols<=0 || cols >MAX);
	return cols;
}

int main(void) {
	int filas,cols;
	int matriz[MAX][MAX];
	float matrizF[MAX][MAX];
	int elige,valor=0;
	float real;



	do{

		printf("\nElige una opción (1-12, 0 para salir)\n");

		do {
		fflush(stdout);
		scanf("%d",&elige);
		}while (elige < 1 || elige > 12);

	switch(elige){

	case 1:

		puts("Programa de ejemplo de matrices");

		filas = dimensionFila();
		cols = dimensionColumna();
		printf("Introduce la matriz");
		pedirMatriz(filas,cols,matriz);

		printf("La matriz es \n");
		mostrarMatriz(filas,cols,matriz);

		printf("El menor elemento del vector es %d",devuelveMenor(filas,cols,matriz));

	break;

	case 2:

		filas = dimensionFila();
		cols = dimensionColumna();
		puts("Elige un número para inicializar la matriz con ese valor");
		fflush(stdout);
		scanf("%d", &valor);
		pedirMatrizDeter(filas,cols,matriz,valor);
		mostrarMatriz(filas,cols,matriz);

	break;

	case 3:

		filas = dimensionFila();
		cols = dimensionColumna();
		puts("Comprobamos si es una matriz nula o no (todos los valores a 0)\n");
		fflush(stdout);
		scanf("%d", &valor);
		pedirMatrizDeter(filas,cols,matriz,valor);
		mostrarMatriz(filas,cols,matriz);
		if (matrizNula(filas,cols,matriz)){
			printf("Es una matriz nula\n");
		}else{
			printf("No es una matriz nula\n");
		}

	break;

	case 4:

		filas = dimensionFila();
		cols = dimensionColumna();
		puts("Vamos a ver si el número introducido se encuentra en toda la matriz\n");
		fflush(stdout);
		scanf("%f", &real);
		printf("%f",real);
		pedirMatrizF(filas,cols,matrizF);
		mostrarMatrizF(filas,cols,matrizF);
		if (comparaValor(filas,cols,matrizF,real)){
			printf("Está en todos los elementos\n");
		}else{
			printf("No está en todos\n");
		}

	break;

	case 5:

		filas = dimensionFila();
		cols = dimensionColumna();
		puts("Vamos a ver si el número introducido se encuentra en toda la matriz\n");

		pedirMatrizF(filas,cols,matrizF);
		mostrarMatrizF(filas,cols,matrizF);
		if (comparaSuperior(filas,cols,matrizF)){
			printf("Está en todos los elementos\n");
		}else{
			printf("No está en todos\n");
		}

	break;


	default:

		return 0;

	break;
	}

	}while (elige != 0);

	return EXIT_SUCCESS;
}
