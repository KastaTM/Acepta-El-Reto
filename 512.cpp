#include <iostream>

using namespace std;

void resuelveCaso() {
	int conejo, caballo;
	cin >> conejo >> caballo;
	cout << ((conejo * 100) / (conejo + caballo)) << "\n";
}

int main() {
	int numcasos;
	cin >> numcasos;
	for (int i = 0; i < numcasos; ++i) {
		resuelveCaso();
	}
	return 0;
}