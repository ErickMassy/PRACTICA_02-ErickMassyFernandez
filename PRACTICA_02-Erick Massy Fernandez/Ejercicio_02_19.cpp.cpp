// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 24/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 19

// Problema planteado: Valores al azar mostrados ordenadamente

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int tamano = 10; 
    int vector[tamano];

    srand(time(0));

    cout << "Vector original:\n";
    for (int i = 0; i < tamano; i++) {
        vector[i] = rand() % 100; 
        cout << vector[i] << " ";
    }

    for (int i = 0; i < tamano - 1; i++) {
        for (int j = 0; j < tamano - i - 1; j++) {
            if (vector[j] > vector[j + 1]) {
                int temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }

    cout << "\nVector ordenado de menor a mayor:\n";
    for (int i = 0; i < tamano; i++) {
        cout << vector[i] << " ";
    }

    cout << endl;

    return 0;
}





