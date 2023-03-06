#include <iostream>

using namespace std;

char letras[4] = { '+','-', '*','/' };
int v[5];

void resuelveCaso(
				//Datos del problema
				int n,
				int v[],
				int num,

				//Sol parcial
				int solParcial,
				int k,

				//Sol final
				int& resul
) {

	//Caso base
	if (k == 5) {
		if (solParcial == num)
			resul += 1;
		return;
	}

	//Caso recursivo
	for (int i = 0; i < 4; ++i) {
		if (letras[i] == '+') {
			resuelveCaso(n,v, num, solParcial+v[k], k+1, resul);
		}
		else if (letras[i] == '-') {
			resuelveCaso(n, v, num, solParcial - v[k], k + 1, resul);
		}
		else if (letras[i] == '*') {
			resuelveCaso(n, v, num, solParcial * v[k], k + 1, resul);
		}
		else {
			if(v[k] != 0 && solParcial%v[k] == 0)
				resuelveCaso(n, v, num, solParcial/v[k], k + 1, resul);
		}
	}
}

bool resuelve() {
	int num;
	cin >> num;
	if (!cin) {
		return false;
	}

	int resultado = 0;
	for (int i = 0; i < 5; ++i) {
		cin >> v[i];
	}
	
	resuelveCaso(5, v, num, v[0], 1,resultado);

	if(resultado > 0){
		cout << "SI\n";
	}
	else {
		cout << "NO\n";
	}

	return true;
}

int main() {
	while (resuelve());
	return 0;
}