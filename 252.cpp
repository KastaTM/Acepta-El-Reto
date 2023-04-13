#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool palindromo(const vector <char> & v) {
	int i = 0, fin =v.size() - 1;
	bool palin = true;
	while (palin && i <= fin) {
		palin = (v[i] == v[fin]);
		--fin;
		++i;
	}
	return palin;
}

bool resuelveCaso() {
	int pos, tam;
	string line;
	vector <char> v;
	getline(cin, line);
	if (line == "XXX") {
		return false;
	}
	else {
		tam = line.size();
		for (int i = 0; i < tam; ++i) {
			if (line[i] == ' ') {
				line.erase(i, 1);
				--i;
				--tam;
			}
			else {
				v.push_back(tolower(line[i]));
			}
		}
	}
	if (palindromo(v)) {
		cout << "SI\n";
	}
	else {
		cout << "NO\n";
	}
	return true;
}

int main() {
	while (resuelveCaso()) {}
	return 0;
}