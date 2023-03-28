#include <iostream>

using namespace std;

bool resuelveCaso() {
	int a, b;
	cin >> a >> b;
	if (a < 0 || b < 0) {
		return false;
	}
	else {
		cout << 2 * a + 2 * b << "\n";
	}
	return true;
}

int main() {
	while (resuelveCaso());
	return 0;
}