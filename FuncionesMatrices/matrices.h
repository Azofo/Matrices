/*
 * matrices.h
 *
 *  Created on: 17 nov 2023
 *      Author: Usuario
 */

#ifndef MATRICES_H_
#define MATRICES_H_
#define MAX 30


	void pedirMatriz(int filas, int cols, int matriz[][MAX]); //int **matriz;
	void mostrarMatriz(int filas, int cols, int matriz[][MAX]);
	void pedirMatrizF(int filas, int cols, float matriz[][MAX]);
	void mostrarMatrizF(int filas, int cols, float matriz[][MAX]);
	int devuelveMenor(int filas, int cols, int matriz[][MAX]);
	void pedirMatrizDeter(int filas, int cols, int matriz[][MAX], int valor);
	int matrizNula(int filas, int cols, int matriz[][MAX]);
	int comparaValor(int filas,int cols, float matriz[][MAX], float valor);
	int comparaSuperior(int filas, int cols, float matriz[][MAX]);

#endif /* MATRICES_H_ */


