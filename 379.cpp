#include <iostream>

using namespace std;

const int MAX = 100;
int v[MAX];

bool resuelveCaso() {
	int tamano;
	cin >> tamano;
	if (tamano == 0) {
		return false;
	}
	else {
		for (int i = 0; i < tamano; ++i) {
			cin >> v[i];
		}
	}
}

int main() {
	while (resuelveCaso());
	return 0;
}