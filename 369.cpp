#include <iostream>

using namespace std;

void resuelve(int n) {
	for (int i = 0; i < n; ++i) {
		cout << "1";
	}
}

bool resuelveCaso() {
	int n;
	cin >> n;
	if (n == 0) {
		return false;
	}
	resuelve(n);
	cout << "\n";
	return true;
}

int main() {
	while (resuelveCaso());
	return 0;
}