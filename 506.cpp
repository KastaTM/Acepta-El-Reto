#include <iostream>

using namespace std;

void resuelve() {
	int maxima, minima;
	string caracter;
	cin >> maxima >> caracter >> minima;
	if (maxima >= minima) {
		cout << "BIEN" << endl;
	}
	else {
		cout << "MAL" << endl;
	}
}

int main() {
	int numcasos;
	cin >> numcasos;
	for (int i = 0; i < numcasos; i++) {
		resuelve();
	}
	return 0;
}