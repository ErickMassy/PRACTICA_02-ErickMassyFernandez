// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 24/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 21

// Problema planteado: Declarar valores para 3 vectores

#include <iostream>

using namespace std;

int main() {
    const int tamano = 5; 
    int vector1[tamano];
    int vector2[tamano];
    int vector3[tamano];

    cout << "Ingrese " << tamano << " valores para vector1:\n";
    for (int i = 0; i < tamano; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vector1[i];
    }

    cout << "Ingrese " << tamano << " valores para vector2:\n";
    for (int i = 0; i < tamano; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vector2[i];
    }

    for (int i = 0; i < tamano; i++) {
        vector3[i] = vector1[i] + vector2[i];
    }

    cout << "El resultado de la suma de vector1 y vector2 (vector3) es:\n";
    for (int i = 0; i < tamano; i++) {
        cout << vector3[i] << " ";
    }

    cout << endl;

    return 0;
}

    




