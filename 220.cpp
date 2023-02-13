#include <iostream>

using namespace std;

typedef int tMatriz[3][3];

void iniciocalculadora(tMatriz& calculadora) {
	calculadora[0][0] = 7;
	calculadora[0][1] = 8;
	calculadora[0][2] = 9;
	calculadora[1][0] = 4;
	calculadora[1][1] = 5;
	calculadora[1][2] = 6;
	calculadora[2][0] = 1;
	calculadora[2][1] = 2;
	calculadora[2][2] = 3;
}

void posicion(tMatriz& calculadora, int numero, int& fila, int& cols) {
	int i = 0;
	int j = 0;
	bool encontrado = false;
	while (i < 3 && !encontrado) {
		int j = 0;
		while (j < 3 && !encontrado) {
			if (calculadora[i][j] == numero) {
				fila = i;
				cols = j;
				encontrado = true;
			}
			++j;
		}
		++i;
	}
}

bool gana(tMatriz& calculadora, int suma, int n, int filn, int coln) {
	if (suma >= 31) return false;
	int i = 0;
	while (i < 3) {
		int j = 0;
		while (j < 3) {
			if (i != filn && j == coln) { //Si esta en la columna de la calculadora
				if (gana(calculadora, suma + calculadora[i][j], calculadora[i][j], i, j)) {
					return false;
				}
			}
			if (j != coln && i == filn) { //Si esta en la fila de la calculadora
				if (gana(calculadora, suma + calculadora[i][j], calculadora[i][j], i, j)) {
					return false;
				}
			}
			++j;
		}
		++i;
	}
	return true;
}

void resuelve() {
	int numero, n, fila, cols;
	cin >> numero >> n;
	tMatriz calculadora;
	iniciocalculadora(calculadora);
	posicion(calculadora, n, fila, cols);
	if (!gana(calculadora, numero, n, fila, cols)) cout << "GANA\n";
	else cout << "PIERDE\n";
}

int main() {
	int numcasos;
	cin >> numcasos;
	for (int i = 0; i < numcasos; ++i) {
		resuelve();
	}
	return 0;
}