#include <iostream>

using namespace std;

int resuelve(int n) {
	int cerillas = 0;
	for (int i = n; i > 0; --i) {
		cerillas +=  3*i;
	}
	return cerillas;
}

bool resuelveCaso() {
	int n;
	cin >> n;
	if (n == 0) {
		return false;
	}
	else {
		cout << resuelve(n) << "\n";
	}
	return true;
}

int main() {
	while (resuelveCaso());
	return 0;
}