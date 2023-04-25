#include <iostream>

using namespace std;


void resuelve() {
	int desplazamiento, velocidad, tiempo;
	char num1, num2, aux;
	cin >> num1;
	if (num1 == 'D') {
		cin >> aux >> desplazamiento >> num2 >> aux;
		if (num2 == 'T') {
			cin >> tiempo;
			cout << "V=" << desplazamiento / tiempo << "\n";
		}
		else if (num2 == 'V') {
			cin >> velocidad;
			cout << "T=" << desplazamiento / velocidad << "\n";
		}
	}
	else if (num1 == 'T') {
		cin >> aux >> tiempo >> num2 >> aux;
		if (num2 == 'D') {
			cin >> desplazamiento;
			cout << "V=" << desplazamiento / tiempo << "\n";
		}
		else if (num2 == 'V') {
			cin >> velocidad;
			cout << "D=" << velocidad * tiempo << "\n";
		}
	}
	else {
		cin >> aux >> velocidad >> num2 >> aux;
		if (num2 == 'D') {
			cin >> desplazamiento;
			cout << "T=" << desplazamiento / velocidad << "\n";
		}
		else if (num2 == 'T') {
			cin >> tiempo;
			cout << "D=" << velocidad * tiempo << "\n";
		}
	}
}

int main(){
	int numcasos;
	cin >> numcasos;
	for (int i = 0; i < numcasos; ++i) {
		resuelve();
	}
	return 0;
}