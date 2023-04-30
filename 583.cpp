#include <iostream>

using namespace std;

void resuelveCaso() {
	double primera, segunda;
	int resultado;
	cin >> primera >> segunda;
	resultado = 100 * (primera - ((primera + segunda) / 2)) / ((primera + segunda) / 2);
	cout << resultado <<"\n";
}

int main() {
	long long int numcasos;
	cin >> numcasos;
	for (int i = 0; i < numcasos; ++i) {
		resuelveCaso();
	}
	return 0;
}