// Materia: Programaci√≥n I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creaci√≥n: 24/08/2023

// Fecha modificaci√≥n: 31/08/2023

// N√∫mero de ejericio: 5

// Problema planteado: Detector altura en cm para vectores

#include <iostream>
#include <cstdlib>

int main() {

  int arreglo[50];
  int estatura_maxima = 0;
  int estatura_minima = 1000;
  int promedio = 0;
  int estatura;
  int n;

  std::cout << "Ingrese el n˙mero de personas: ";
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    estatura = 50 + rand() % 240;
    arreglo[i] = estatura;
  }


  for (int i = 0; i < n; i++) {

    if (arreglo[i] > estatura_maxima) {
      estatura_maxima = arreglo[i];
    }

    if (arreglo[i] < estatura_minima) {
      estatura_minima = arreglo[i];
    }

    promedio += arreglo[i];
  }

  promedio = promedio / n;

  std::cout << "Estatura m·xima: " << estatura_maxima << " cm" << std::endl;
  std::cout << "Estatura mÌnima: " << estatura_minima << " cm" << std::endl;
  std::cout << "Promedio de estaturas: " << promedio << " cm" << std::endl;

  return 0;
}



