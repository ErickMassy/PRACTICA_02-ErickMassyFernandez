// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 24/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 16

// Problema planteado: Impresion Inversa

#include <iostream>

int main() {

  std::string vector[5];
  std::string vector_inverso[5];
  int i;

  for (i = 0; i < 5; i++) {
    std::cout << "Ingrese la cadena de caracteres " << i + 1 << ": ";
    std::cin >> vector[i];
  }

  for (i = 4; i >= 0; i--) {
    vector_inverso[i] = vector[4 - i];
  }

  for (i = 0; i < 5; i++) {
    std::cout << vector_inverso[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}



