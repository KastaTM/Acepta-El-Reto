#include <iostream>

using namespace std;

bool resuelveCaso() {
	long long int numcopas, max = 0, valores = 0, aux;
	cin >> numcopas;
	if (numcopas == 0) {
		return false;
	}
	for (int i = 0; i < numcopas; ++i) {
		cin >> aux;
		if (aux > max) {
			max = aux;
		}
		valores += aux;
	}
	cout << max * numcopas - valores << "\n";
	return true;
}

int main() {
		while(resuelveCaso());
	return 0;
}