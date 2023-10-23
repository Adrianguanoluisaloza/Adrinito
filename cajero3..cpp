// Programa: cajero automático
// Autor: Adrián Guanoluisa
// Fecha: 12-10-2023
// Archivo: cajero automático.cpp

#include <iostream>

using namespace std;

int main()
{
    int c1, C2, C3, c01 = 22, c02 = 50, c03 = 30;
    float valor, saldodisponible = 10000;

    cout << "Ingrese c1 C2 C3: ";
    cin >> c1 >> C2 >> C3;

    if (c1 == c01) {
        if (C2 == c02) {
            if (C3 == c03) {
                cout << "Ingrese el valor a retirar: ";
                cin >> valor;
                saldodisponible = saldodisponible - valor;
            } else {
                cout << "Contraseña C3 incorrecta" << endl;
            }
        } else {
            cout << "Contraseña C2 incorrecta" << endl;
        }
    } else {
        cout << "Contraseña C1 incorrecta" << endl;
    }

    return 0;
}
