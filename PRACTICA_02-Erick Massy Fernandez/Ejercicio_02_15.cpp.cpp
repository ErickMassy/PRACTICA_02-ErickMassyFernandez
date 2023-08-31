// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 24/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 15

// Problema planteado: Programa que muestra raiz y cuadrado e vector

#include <iostream>
#include <cstdlib>

int main() {

  int vector[10];
  int i;

  for (i = 0; i < 10; i++) {
    vector[i] = rand() % 10 + 1;
  }

  for (i = 0; i < 10; i++) {
    std::cout << "El elemento " << i + 1 << " es " << vector[i] << ", su cuadrado es "
              << vector[i] * vector[i] << " y su cubo es " << vector[i] * vector[i] * vector[i]
              << std::endl;
  }

  return 0;
}



