#include <iostream>

using namespace std;

int v[200000];

int resuelveCaso(int v[], int n) {
	int i = 1, cont = 1, persona = v[0], ultimoNino = v[0];

	while (i < n) {
		if (v[i] > persona) {
			persona = v[i];
		}
		if (v[i] <= ultimoNino) {
			cont = i + 1;
			ultimoNino = persona;
		}
		++i;
	}
	return cont;
}

bool resuelve() {
	int personas;
	cin >> personas;

	if (personas == 0)
		return false;

	for (int i = 0; i < personas; ++i)
		cin >> v[i];

	int resultado = resuelveCaso(v, personas);

	cout << resultado << "\n";

	return true;
}

int main() {
	while (resuelve());
	return 0;
}