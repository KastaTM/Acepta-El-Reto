#include <iostream>

using namespace std;


void resuelveCaso() {
	int horas, encendidos, horasuso;
	cin >> horas >> encendidos >> horasuso;

	if (encendidos * horasuso >= horas && encendidos * horasuso <= horas) {
		cout << "AMBAS\n";
	}
	else if (encendidos * horasuso >= horas) {
		cout << "HORAS\n";
	}
	else if(encendidos * horasuso < horas){
		cout << "ENCENDIDOS\n";
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