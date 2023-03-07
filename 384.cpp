#include <iostream>

using namespace std;

int v[500000];

bool resuelveCaso(int v[], int ini, int fin, int& min, int& max){
	max = v[ini]; 
	int indiceMax = ini;
	min = v[ini];

	for (int i = ini + 1; i < fin; ++i){
		if (v[i] > max) { 
			max = v[i]; 
			indiceMax = i;
		}
		if (v[i] < min)  
			min = v[i];
	}

	if (fin - ini < 3)	
		return true;
	else {
		int maxDcha, maxIzq, minDcha, minIzq;

		if (ini == indiceMax)
			return resuelveCaso(v, indiceMax + 1, fin, minDcha, minIzq);
		else if (indiceMax + 1 == fin)
			return resuelveCaso(v, ini, indiceMax, minIzq, maxIzq);
		else
			return resuelveCaso(v, ini, indiceMax, minIzq, maxIzq) && resuelveCaso(v, indiceMax + 1, fin, minDcha, maxDcha) && minIzq >= maxDcha;
	}
}

bool resuelve() {
	int n;
	cin >> n;
	if (!cin)
		return false;

	for (int i = 0; i < n; ++i)
		cin >> v[i];

	int min, max;
	if(resuelveCaso(v,0,n, min, max))
		cout << "SIEMPRE PREMIO\n";
	else
		cout << "ELEGIR OTRA\n";
	
	return true;
}

int main() {
	while (resuelve());
	return 0;
}