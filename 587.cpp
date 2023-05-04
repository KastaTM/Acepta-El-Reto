#include <iostream>

using namespace std;

void resuelveCaso() {
	string fila;
	int i = 0, cont = 0;
	cin >> fila;
	while (i < fila.size()) {
		if (i % 2 == 0) {
			if (fila[i] == fila[i + 1]) {
				++cont;
			}
		}
		else {
			++cont;
		}
		++i;
	}
	cout << cont << "\n";
}

int main() {
	int numcasos;
	cin >> numcasos;
	for (int i = 0; i < numcasos; ++i) {
		resuelveCaso();
	}
}