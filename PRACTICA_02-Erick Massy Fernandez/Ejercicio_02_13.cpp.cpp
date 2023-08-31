// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 24/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 13

// Problema planteado: Almacenador de numeros primos

#include <iostream>

int main() {

  int n;
  bool es_primo;
  int numeros_primos[100];
  int i = 0;

  std::cout << "Ingrese el n�mero de n�meros primos: ";
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    numeros_primos[i] = 0;
  }

  for (int i = 2; i <= n; i++) {
    es_primo = true;

    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        es_primo = false;
        break;
      }
    }

    if (es_primo) {
      numeros_primos[i - 2] = i;
    }
  }

  for (int i = 0; i < n; i++) {
    if (numeros_primos[i] != 0) {
      std::cout << numeros_primos[i] << " ";
    }
  }
  std::cout << std::endl;

  return 0;
}




