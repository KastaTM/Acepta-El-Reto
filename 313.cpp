#include <iostream>

using namespace std;


void resuelveCaso() {
	int n, m;
	cin >> n >> m;

	if (n + m >= 0) {
		cout << "SI\n";
	}
	else {
		cout << "NO\n";
	}
}

int main() {
	int numcasos;
	cin >> numcasos;
	for (int i = 0; i < numcasos; ++i) {
		resuelveCaso();
	}
	return 0;
}