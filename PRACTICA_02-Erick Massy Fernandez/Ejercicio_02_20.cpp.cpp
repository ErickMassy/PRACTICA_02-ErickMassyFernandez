// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 24/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 20

// Problema planteado: Interprete de numeros a meses y dicatador de dias

#include <iostream>

int main() {

  std::string meses[12] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};
  int numero_de_mes;

  std::cout << "Ingrese un n�mero de mes (1-12): ";
  std::cin >> numero_de_mes;

  std::string nombre_de_mes = meses[numero_de_mes - 1];

  int numero_de_dias = 30;
  if (numero_de_mes == 2) {
    numero_de_dias = 28;
  }


  std::cout << "El mes " << nombre_de_mes << " tiene " << numero_de_dias << " d�as." << std::endl;

  return 0;
}

    




