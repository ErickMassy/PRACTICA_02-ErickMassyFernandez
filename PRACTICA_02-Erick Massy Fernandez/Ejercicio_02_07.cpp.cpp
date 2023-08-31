// Materia: ProgramaciÃ³n I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creaciÃ³n: 24/08/2023

// Fecha modificaciÃ³n: 31/08/2023

// NÃºmero de ejericio: 7

// Problema planteado: Detector de nombres 

#include <iostream>

int main() {

  const std::string vector_1[] = {"Juan", "Pedro", "María", "José", "Luis", "Ana", "Sofia"};
  const std::string vector_2[] = {"Juan", "Pedro", "María", "José", "Luis", "Ana", "Sofia"};
  bool son_iguales = true;
  int i;

  for (i = 0; i < 7; i++) {

    if (vector_1[i] != vector_2[i]) {
      son_iguales = false;
      break;
    }
  }

  if (son_iguales) {
    std::cout << "Iguales" << std::endl;
  } else {
    std::cout << "Diferentes" << std::endl;
  }

  return 0;
}





