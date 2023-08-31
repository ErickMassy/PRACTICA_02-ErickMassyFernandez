// Materia: Programaci√≥n I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creaci√≥n: 24/08/2023

// Fecha modificaci√≥n: 31/08/2023

// N√∫mero de ejericio: 10

// Problema planteado: Poblacion registrada en disitintos departamentos

#include <iostream>

int main() {

  int poblacion[9];
  std::string nombres[9];
  int mayor_poblacion = 0;
  int menor_poblacion = 1000000;
  int i;

  for (i = 0; i < 9; i++) {
    std::cout << "Ingrese la poblaciÛn del departamento " << i + 1 << ": ";
    std::cin >> poblacion[i];
    std::cout << "Ingrese el nombre del departamento " << i + 1 << ": ";
    std::cin >> nombres[i];
  }

  for (i = 0; i < 9; i++) {
    if (poblacion[i] > mayor_poblacion) {
      mayor_poblacion = poblacion[i];
    }
    if (poblacion[i] < menor_poblacion) {
      menor_poblacion = poblacion[i];
    }
  }

  std::cout << "El departamento con la mayor poblaciÛn es " << nombres[mayor_poblacion]
            << " con " << mayor_poblacion << " habitantes." << std::endl;
  std::cout << "El departamento con la menor poblaciÛn es " << nombres[menor_poblacion]
            << " con " << menor_poblacion << " habitantes." << std::endl;

  return 0;
}






