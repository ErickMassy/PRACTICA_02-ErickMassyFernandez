// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 24/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 22

// Problema planteado: Multiplicador de vectores en otro vector

#include <iostream>

using namespace std;

int main() {
    const int N = 5; 
    int vector1[N];
    int vector2[N];
    int resultado[N];

    cout << "Ingrese " << N << " valores para el primer vector:\n";
    for (int i = 0; i < N; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vector1[i];
    }

    cout << "Ingrese " << N << " valores para el segundo vector:\n";
    for (int i = 0; i < N; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vector2[i];
    }

    for (int i = 0; i < N; i++) {
        resultado[i] = vector1[i] * vector2[i];
    }

    cout << "El resultado de la multiplicaci�n de los vectores es:\n";
    for (int i = 0; i < N; i++) {
        cout << resultado[i] << " ";
    }

    cout << endl;

    return 0;
}


    




