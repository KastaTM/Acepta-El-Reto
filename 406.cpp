#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void avance(vector<char>& v, const vector<int>& semaph) {
	int N = v.size();
	int s = semaph.size();
	int i = N - 1;//Contador de recorrido de v.
	int j = s - 1;//Contador de recorrido del vector semaph.
	int pos;
	char aux;

	while (i > semaph[j]) {//Todos los coches despu�s del �ltimo sem�foro se van de la calle
		v[i] = '.';
		--i;
	}

	--i;//Posici�n anterior al �ltimo sem�foro
	--j;//retrocedo de sem�foro
	while (j >= 0) {
		pos = i;//Posici�n parcial donde se paran los coches antes del sem�foro
		while (i > semaph[j]) {
			if (v[i] != '.') {
				aux = v[i];
				v[i] = v[pos];
				v[pos] = aux;
				--pos;
			}
			--i;
		}
		--i;
		--j;
	}
}


bool resuelveCaso() {
	int consultas, pos, i;
	char aux;
	vector<char> v;
	vector<int> semaph;
	cin >> aux;
	if (!cin) { return false; }

	i = 0;
	semaph.push_back(-1);//Contamos una posici�n inicial de un sem�foro no existente al principio de la calle
	while (aux != '\n') {
		if (aux == '|') { semaph.push_back(i); }
		v.push_back(aux);
		cin.get(aux);
		++i;
	}

	avance(v, semaph);

	cin >> consultas;
	i = 0;
	while (i < consultas) {
		cin >> pos;
		cout << v[pos - 1];
		++i;
		if (i < consultas) { cout << " "; }
	}

	cout << "\n";
	return true;
}


int main() {
	while (resuelveCaso());
	return 0;
}