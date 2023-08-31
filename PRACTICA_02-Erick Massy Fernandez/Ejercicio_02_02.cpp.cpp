// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 24/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 2

// Problema planteado: Porcentaje de pares e impares negativos

#include <iostream>

int main() {

  int arreglo[10];

  int pares_positivos = 0;
  int impares_negativos = 0;

  for (int i = 0; i < 10; i++) {
    std::cout << "Ingrese el n�mero " << i + 1 << ": ";
    std::cin >> arreglo[i];
  }

  for (int i = 0; i < 10; i++) {

    if (arreglo[i] % 2 == 0 && arreglo[i] > 0) {
      pares_positivos++;
    }

    if (arreglo[i] % 2 != 0 && arreglo[i] < 0) {
      impares_negativos++;
    }
  }

  float porcentaje_pares_positivos = (pares_positivos * 100) / 10;

  float porcentaje_impares_negativos = (impares_negativos * 100) / 10;

  std::cout << "Porcentaje de pares positivos: " << porcentaje_pares_positivos << "%" << std::endl;
  std::cout << "Porcentaje de impares negativos: " << porcentaje_impares_negativos << "%" << std::endl;

  return 0;
}


