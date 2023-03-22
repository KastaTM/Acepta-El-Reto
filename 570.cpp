#include <iostream>
#include <math.h>

using namespace std;

char letras[] = { 'T','R','W','A','G','M','Y','F','P','D','X','B','N','J','Z','S','Q','V','H','L','C','K','E' };
char dni[9];


int resuelveCaso(
	//Datos del problema

	//Sol parcial
	int suma,
	int k
) {
	int ret = 0;
	if (k == 8) {
		if((letras[suma % 23] == dni[8]))
			return 1;
		return 0;
	}

	//Caso recursivo
	//Caso 1: El número está puesto
	if (dni[k] != '?') {
		int j = dni[k] - 48;
		suma += (j * pow(10, 8 - (k + 1)));
		ret += resuelveCaso(suma, k + 1);
	}
	//Caso 2: El número no está puesto
	else {
		for (int i = 0; i < 10; ++i) {
			suma += (i * pow(10, 8 - (k + 1)));
			ret += resuelveCaso(suma, k + 1);
			suma -= (i * pow(10, 8 - (k + 1)));
		}
	}

	return ret;
}

void resuelve() {
	for (int i = 0; i < 9; ++i) {
		cin >> dni[i];
	}

	cout << resuelveCaso(0, 0) << "\n";

}

int main() {
	int numcasos;
	cin >> numcasos;
	for (int i = 0; i < numcasos; ++i)
		resuelve();
	return 0;
}