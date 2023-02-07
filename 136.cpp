#include <iostream>

using namespace std;

long int resuelveCaso(int hobbits, int cadena) {
	if (hobbits >= cadena || (2 * hobbits) >= cadena) {
		return 0;
	}
	long int corto = cadena / 3;
	long int largo = cadena - corto;

	return resuelveCaso(hobbits, corto) + resuelveCaso(hobbits, largo) + 1;
}

bool resuelve() {
	int hobbits, cadena;
	cin >> hobbits >> cadena;
	if (hobbits == 0)
		return false;

	cout << resuelveCaso(hobbits, cadena) <<"\n";
	return true;
}

int main() {
	while (resuelve());
	return 0;
}