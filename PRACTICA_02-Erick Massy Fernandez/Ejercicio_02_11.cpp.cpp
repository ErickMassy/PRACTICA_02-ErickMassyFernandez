// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 24/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 11

// Problema planteado: Desviacion tipica de Edades almacenadas

#include <iostream>
#include <math.h>

int main() {

  int arreglo[100];
  int n = 0;
  int suma = 0;
  int promedio;
  int suma_de_cuadrados = 0;
  float desviacion_tipica;

  std::cout << "Ingrese las edades de varias personas (hasta ingresar un -1): ";
  while (true) {
    std::cin >> arreglo[n];
    if (arreglo[n] == -1) {
      break;
    }
    n++;
  }

  for (int i = 0; i < n; i++) {
    suma += arreglo[i];
  }
  promedio = suma / n;

  for (int i = 0; i < n; i++) {
    suma_de_cuadrados += pow(arreglo[i] - promedio, 2);
  }
  desviacion_tipica = sqrt(suma_de_cuadrados / n);

  std::cout << "La desviaci�n t�pica es " << desviacion_tipica << " a�os." << std::endl;

  return 0;
}






