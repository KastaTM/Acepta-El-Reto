#include <iostream>

using namespace std;

bool resuelveCaso() {
	int n;
	cin >> n;
	if (n == 0) {
		return false;
	}

	if (n % 2 == 0) {
		cout << "DERECHA\n";
	}
	else {
		cout << "IZQUIERDA\n";
	}
	return true;
}

int main() {
	while (resuelveCaso());
	return 0;
}