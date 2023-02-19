#include <iostream>

using namespace std;

char v[500][500];


bool resuelve() {
	int filas, columnas, n;
	cin >> filas >> columnas;
	if (filas == 0 && columnas == 0)
		return 0;
	for (int i = 0; i < filas; i++)
		for (int j = 0; j < columnas; j++)
			cin >> v[i][j];
	
	char abecedarioInicial[27], abecedarioFinal[27];
	char inicio = 'A';
	for (int i = 0; i < 26; ++i) {
		abecedarioInicial[i] = inicio;
		abecedarioFinal[i] = inicio;
		++inicio;
	}
		
	char ini, fin;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> ini >> fin;
		for (int j = 0; j < 26; ++j) {
			if (ini == abecedarioFinal[j]) {
				abecedarioFinal[j] = fin;
			}
		}
	}

	for (int i = 0; i < filas; ++i) {
		for (int j = 0; j < columnas; ++j) {
			int k = 0;
			while ((abecedarioInicial[k] != v[i][j]) && (k < 26)) {
				++k;
			}
			if (k < 26) {
				v[i][j] = abecedarioFinal[k];
			}
			cout << v[i][j];
		}
		cout << endl;
	}

	return true;
}

int main() {
	while (resuelve());
	return 0;
}