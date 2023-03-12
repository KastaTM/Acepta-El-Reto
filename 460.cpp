#include <iostream>

using namespace std;

bool resuelveCaso() {
	string num;
	cin >> num;
	if(!cin)
		return false;
	cout << num[0];
	for (int i = 1; i < num.length(); ++i) {
		cout << "0" <<num[i];
	}
	cout <<"\n";

	return true;
}

int main() {
	while (resuelveCaso());
	return 0;
}