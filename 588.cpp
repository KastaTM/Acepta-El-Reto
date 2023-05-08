#include <iostream>

using namespace std;


void toBinary(int n, string &ret) {
	string ret = "";
	if (n == 0) {
		return;
	}
	
	ret.push_back();
}

bool resuelve(int n) {
	string binario = "";
	bool posible = false;
	int pos = 0, i = 0;
	if (n > 0) {
		while (n > 0) {
			if (n % 2 == 0) {
				binario = "0" + binario;
			}
			else {
				binario = "1" + binario;
			}
			n = (int)n / 2;
		}
	}

	// 0 1 1 1
	int j = binario.size() - 1;
	while (i < j) {
		if (binario[i] == '1' && binario[i] == binario[j]) { // 1 1
			++i;
			--j;
		}
		else if (binario[i] == '0' && binario[i] == binario[j]) { // 0 0
			++i;
			--j;
		}
		else if (binario[j] == '0' && binario[i] == '1') {
			if (i == 0) {
				--j;
			}
			else {
				return false;
			}
		}
		else if (binario[i] == '1' && binario[j] == '0') {
			return false;
		}
	}
	return true;
}

bool resuelveCaso() {
	int n;
	cin >> n;
	if (n == 0) {
		return false;
	}
	else {
		if (resuelve(n)) {
			cout << "SI\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return true;
}

int main() {
	while (resuelveCaso());
	return 0;
}