#include <iostream>

using namespace std;

void resuelve() {
	int neto, total;
	cin >> neto >> total;
	cout << total - neto << "\n";
}

int main() {
	int numcasos;
	cin >> numcasos;
	for (int i = 0; i < numcasos; ++i) {
		resuelve();
	}
}