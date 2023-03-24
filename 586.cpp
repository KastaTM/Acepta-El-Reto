#include <iostream>

using namespace std;

int v[70];

int resuelveCaso(int v[], int n) {
	int mayor = v[0], menor = v[0], ret, cont = 0;

	for (int i = 0; i < n; ++i) {
		if (v[i] > mayor)
			mayor = v[i];
		if (v[i] < menor)
			menor = v[i];
		cont++;	
	}

	return mayor - menor - (cont - 1);

}

bool resuelve() {
	int resultado, aux;
	cin >> aux;
	for (int j = 0; j < aux; ++j) {
		cin >> v[j];
	}
	resultado = resuelveCaso(v,aux);
	
	cout << resultado << "\n";

	return true;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
		resuelve();
	return 0;
}