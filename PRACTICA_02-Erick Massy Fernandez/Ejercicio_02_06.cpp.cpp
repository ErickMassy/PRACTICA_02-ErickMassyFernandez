// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 24/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 6

// Problema planteado: Detector altura en cm para vectores

#include <iostream>

int main() {

  const int arreglo_1[] = {1, 3, 5, 7, 9};
  const int arreglo_2[] = {2, 4, 6, 8, 10};
  int arreglo_intercalado[10];
  int i, j, k;

  for (i = 0, j = 0, k = 0; i < 5; i++, j++, k++) {
    arreglo_intercalado[k] = arreglo_1[i];
    arreglo_intercalado[k + 1] = arreglo_2[j];
  }

  for (i = 0; i < 10; i++) {
    std::cout << arreglo_intercalado[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}




