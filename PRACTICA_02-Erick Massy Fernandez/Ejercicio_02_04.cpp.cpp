// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 24/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 4

// Problema planteado: Detector mayores de edad y menores de edad para vectores

#include <iostream>
#include <cstdlib>

int main() {

  int arreglo[50];
  int edad;
  int mayores = 0;
  int menores = 0;

  for (int i = 0; i < 50; i++) {
    edad = 1 + rand() % 100;
    arreglo[i] = edad;
  }

  for (int i = 0; i < 50; i++) {

    if (arreglo[i] >= 18) {
      mayores++;
    }

    else {
      menores++;
    }
  }

  float porcentaje_mayores = (mayores * 100) / 50;

  float porcentaje_menores = (menores * 100) / 50;

  std::cout << "Porcentaje de mayores: " << porcentaje_mayores << "%" << std::endl;
  std::cout << "Porcentaje de menores: " << porcentaje_menores << "%" << std::endl;

  return 0;
}



