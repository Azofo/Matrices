/*
 * matrices.c
 *
 *  Created on: 17 nov 2023
 *      Author: Usuario
 */
#include <stdio.h>
#include "matrices.h"

void pedirMatriz(int filas, int cols, int matriz[][MAX]) {
	int i,j;

	for (i = 0; i < filas; i++) {
		for (j=0;j<cols;j++) {
			printf("Introduce el elemento (%d,%d): ",i+1,j+1);
			fflush(stdout);
			scanf("%d", &matriz[i][j]);
		}
	}
}
void mostrarMatriz(int filas, int cols, int matriz[][MAX]){
	int i,j;
	for (i = 0; i < filas; i++) {
		for (j=0;j<cols;j++) {
			printf("%5d ", matriz[i][j]);
		}
		puts("");
	}
}

void pedirMatrizF(int filas, int cols, float matriz[][MAX]) {
	int i,j;
	for (i = 0; i < filas; i++) {
		for (j=0;j<cols;j++) {
			printf("Introduce el elemento (%d,%d): ",i+1,j+1);
			fflush(stdout);
			scanf("%f", &matriz[i][j]);
		}
	}
}

void mostrarMatrizF(int filas, int cols, float matriz[][MAX]){
	int i,j;
	for (i = 0; i < filas; i++) {
		for (j=0;j<cols;j++) {
			printf("%.2f ", matriz[i][j]);
		}
		puts("");
	}
}

int devuelveMenor(int filas, int cols, int matriz[][MAX]){

	int menor=matriz[0][0];
	int i,j;

	for (i=0;i<filas; i++) {
		for(j=0;j<cols;j++) {
			if (matriz[i][j]<menor) {
				menor=matriz[i][j];
			}
		}
	}
	return menor;
}

void pedirMatrizDeter(int filas, int cols, int matriz[][MAX], int valor) {
		int i,j;

		for (i = 0; i < filas; i++) {
			for (j=0;j<cols;j++) {
				 matriz[i][j] = valor;
			}
		}
	}

int matrizNula(int filas, int cols, int matriz[][MAX]){
	int i,j,cont=0;
	for (i = 0; i < filas; i++) {
		for (j=0;j<cols;j++) {
			if (matriz[i][j] == 0){
				cont++;
			}
		}
	}
	if (cont == (filas*cols)){
		return 1;
	}else{
		return 0;
	}
}

int comparaValor(int filas,int cols, float matriz[][MAX], float valor){
	int i,j;
	for (i = 0; i < filas; i++) {
		for (j=0;j<cols;j++) {
			if (matriz[i][j] != valor){
				return 0;
			}
		}
	}
	return 1;
}

int comparaSuperior(int filas, int cols, float matriz[][MAX]){

	int i,j,aux=1;
	for (i = 1; i < cols-1; i++) {
		for (j=i;j<filas-i;j++) {
			if (matriz[i][j] != 0){
				aux = 0;

			}
		}
	}
	return aux;

}

