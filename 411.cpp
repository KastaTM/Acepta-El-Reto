#include <iostream>

using namespace std;

void resuelve(double peso, double& cont) {
	double total = 0, elefante;
	cont = 0;
	cin >> elefante;
	while (elefante != 0) {
		total += elefante;
		if (total <= peso) {
			++cont;
		}
		cin >> elefante;
	}
}

int main() {
	double peso, elefante, total, cont = 0;
	cin >> peso;
	while (peso != 0) {
		resuelve(peso, cont);
		cout << cont << endl;
		cont = 0;
		cin >> peso;
	}
	return 0;
}