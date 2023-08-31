// Materia: Programaci√≥n I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creaci√≥n: 24/08/2023

// Fecha modificaci√≥n: 31/08/2023

// N√∫mero de ejericio: 1

// Problema planteado: Suma de Pares y resta de impares

#include <iostream>
#include <ctime> 
#include <cstdlib> 

using namespace std;

int main() {
    int N, A, B;

    cout << "Ingrese el tamaÒo del vector (N): ";
    cin >> N;

    if (N <= 0) {
        cout << "El tamaÒo del vector debe ser mayor que cero." << endl;
        return 1; 
    }

    cout << "Ingrese el valor mÌnimo (A): ";
    cin >> A;
    cout << "Ingrese el valor m·ximo (B): ";
    cin >> B;

    if (A > B) {
        cout << "El valor mÌnimo (A) debe ser menor o igual al valor m·ximo (B)." << endl;
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

    cout << "Suma de componentes de Ìndice par: " << sumaPares << endl;
    cout << "Resta de componentes de Ìndice impar: " << restaImpares << endl;

    return 0;
}


