#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 25000;
int v[MAX];


//{ Pre: (0 < n < longitud(v) ^ ordenado(v,n) 
//donde
//ordenado(v,n) = P.t i: 0 <= i < n - 1 : v[i] < v[i + 1]
//}
int resuelve(int v[], int n) {/*return ret*/
	int ret = v[0], numVeces = 1, i = 1, repActual = 1;

	while (i < n) {
		if (v[i - 1] == v[i]) {
			++repActual;
		}
		else {
			repActual = 1;
		}
		if (repActual > numVeces) {
			ret = v[i];
			numVeces = repActual;
		}
		++i;
	}
	return ret;
}
//{ Post: frec(ret,v,n) = max i: 0 <= i < n : frec(ret,v,n) }
//Donde:
//frec(val,v,n) = #i : 0 <= i < n : v[i] = val

bool resuelveCaso() {
	int numvalores;
	cin >> numvalores;

	if (numvalores == 0)
		return false;
	
	for (int i = 0; i < numvalores; ++i)
		cin >> v[i];

	sort(v, v + numvalores);

	int moda = resuelve(v, numvalores);

	cout << moda << "\n";

	return true;
}

int main() {
	while (resuelveCaso());
	return 0;
}