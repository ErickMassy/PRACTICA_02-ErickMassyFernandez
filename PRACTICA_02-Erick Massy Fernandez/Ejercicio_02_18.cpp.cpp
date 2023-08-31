// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 24/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 18

// Problema planteado: Mostrar elementos introducidos hasta que aparezca un negativo

#include <iostream>
using namespace std;

int main() {
    const int tamano = 10;  
    int vector[tamano];
    int numero;
    int contador = 0;

    for (int i = 0; i < tamano; i++) {
        cout << "Ingrese un n�mero (o un n�mero negativo para terminar): ";
        cin >> numero;

        if (numero < 0) {
            break; 
        }

        vector[contador] = numero;
        contador++;
    }

    cout << "\nElementos introducidos en el vector:\n";
    for (int i = 0; i < contador; i++) {
        cout << vector[i] << " ";
    }

    cout << endl;

    return 0;
}




