// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 24/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 17

// Problema planteado: Mostrar nota alta y menor

#include <iostream>

int main() {

    int notas[5];
    int suma = 0;
    int notaMaxima = 0;
    int notaMinima = 100;

    std::cout << "Ingrese las 5 notas (entre 0 y 100):\n";

    for (int i = 0; i < 5; i++) {
        std::cout << "Nota " << i + 1 << ": ";
        std::cin >> notas[i];

        if (notas[i] < 0 || notas[i] > 100) {
            std::cout << "La nota debe estar entre 0 y 100. Intente de nuevo.\n";
            i--; 
        } else {
            suma += notas[i];

            if (notas[i] > notaMaxima) {
                notaMaxima = notas[i];
            }

            if (notas[i] < notaMinima) {
                notaMinima = notas[i];
            }
        }
    }

    float notaMedia = static_cast<float>(suma) / 5.0;

    std::cout << "\nNotas ingresadas:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "Nota " << i + 1 << ": " << notas[i] << "\n";
    }

    std::cout << "Nota Media: " << notaMedia << "\n";
    std::cout << "Nota M�xima: " << notaMaxima << "\n";
    std::cout << "Nota M�nima: " << notaMinima << "\n";

    return 0;
}




