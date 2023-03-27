#include <iostream>

using namespace std;

bool resuelveCaso() {
	int toros, max = 0, aux;
	cin >> toros;
	if (!cin) {
		return false;
	}
	else {
		for (int i = 0; i < toros; ++i) {
			cin >> aux;
			if (aux > max) {
				max = aux;
			}
		}
		cout << max << "\n";
	}
	return true;
}

int main() {
	while (resuelveCaso());
	return 0;
}