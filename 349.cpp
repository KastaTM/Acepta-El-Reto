#include <iostream>

using namespace std;

int resuelveCaso() {
	char c;
	cin >> c;

	if (c == '+') {
		return resuelveCaso() + resuelveCaso();
	}
	else if (c == '-') {
		return resuelveCaso() - resuelveCaso();
	}
	else if (c == '*') {
		return resuelveCaso() * resuelveCaso();
	}
	else if (c == '/') {
		return resuelveCaso() / resuelveCaso();
	}

	return c - '0';
}

void resuelve() {
	cout << resuelveCaso() << "\n";
}

int main() {
	int numcasos;
	cin >> numcasos;
	for (int i = 0; i < numcasos; ++i) {
		resuelve();
	}
	return 0;
}