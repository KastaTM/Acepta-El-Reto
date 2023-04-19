#include <iostream>

using namespace std;

void resuelveCaso() {
	long long int n;
	cin >> n;
	cout << 6 * (n - 1) * (n - 1) + 2 << "\n";
}

int main() {
	int numcasos;
	cin >> numcasos;
	for (int i = 0; i < numcasos; ++i) {
		resuelveCaso();
	}
	return 0;
}