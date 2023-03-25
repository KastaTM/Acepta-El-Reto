#include <iostream>
#include <string>

using namespace std;

int main() {
    string hora;
    while (cin >> hora) {
        if (hora == "00:00") {
            break;
        }
        int horas = stoi(hora.substr(0, 2));
        int minutos = stoi(hora.substr(3, 2));
        int minutos_faltantes = (24 - horas - 1) * 60 + (60 - minutos);
        cout << minutos_faltantes << endl;
    }
    return 0;
}