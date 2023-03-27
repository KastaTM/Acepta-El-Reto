#include <iostream>

using namespace std;

void resuelve() {
	string aux, nombre;
	cin >> aux >> nombre;
	cout << "Hola, " << nombre << ".\n";
}

int main() {
	int numcasos;
	cin >> numcasos;
	for (int i = 0; i < numcasos; ++i) {
		resuelve();
	}
	return 0;
}