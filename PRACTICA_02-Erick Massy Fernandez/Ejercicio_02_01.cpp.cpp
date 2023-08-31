// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 24/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 1

// Problema planteado: Suma de Pares y resta de impares

#include <iostream>
#include <ctime> 
#include <cstdlib> 

using namespace std;

int main() {
    int N, A, B;

    cout << "Ingrese el tama�o del vector (N): ";
    cin >> N;

    if (N <= 0) {
        cout << "El tama�o del vector debe ser mayor que cero." << endl;
        return 1; 
    }

    cout << "Ingrese el valor m�nimo (A): ";
    cin >> A;
    cout << "Ingrese el valor m�ximo (B): ";
    cin >> B;

    if (A > B) {
        cout << "El valor m�nimo (A) debe ser menor o igual al valor m�ximo (B)." << endl;
        return 1; 
    }

    srand(time(NULL));

    int vector[N];
    int sumaPares = 0;
    int restaImpares = 0;

    for (int i = 0; i < N; i++) {
        vector[i] = rand() % (B - A + 1) + A;

        if (i % 2 == 0) {
            sumaPares += vector[i];
        } else {
            restaImpares -= vector[i];
        }
    }

    cout << "Vector generado:" << endl;
    for (int i = 0; i < N; i++) {
        cout << vector[i] << " ";
    }

    cout << endl;

    cout << "Suma de componentes de �ndice par: " << sumaPares << endl;
    cout << "Resta de componentes de �ndice impar: " << restaImpares << endl;

    return 0;
}


