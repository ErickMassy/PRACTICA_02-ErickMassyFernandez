// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 24/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 9

// Problema planteado: Calificaciones del Curso

#include <iostream>

int main() {

  int calificaciones[50];
  std::string nombres[50];
  std::string carreras[50];
  int mejor_calificacion = 0;
  int peor_calificacion = 100;
  int promedio_carrera;
  int i;

  std::cout << "Ingrese el n�mero de estudiantes: ";
  std::cin >> i;

  for (int j = 0; j < i; j++) {
    std::cout << "Ingrese la calificaci�n del estudiante " << j + 1 << ": ";
    std::cin >> calificaciones[j];
    std::cout << "Ingrese el nombre del estudiante " << j + 1 << ": ";
    std::cin >> nombres[j];
    std::cout << "Ingrese la carrera del estudiante " << j + 1 << ": ";
    std::cin >> carreras[j];
  }

  for (int j = 0; j < i; j++) {
    if (calificaciones[j] > mejor_calificacion) {
      mejor_calificacion = calificaciones[j];
    }
    if (calificaciones[j] < peor_calificacion) {
      peor_calificacion = calificaciones[j];
    }
  }

  for (int j = 0; j < i; j++) {
    promedio_carrera += calificaciones[j];
  }
  promedio_carrera /= i;

  std::cout << "El alumno con la mejor calificaci�n es " << nombres[mejor_calificacion]
            << " con una calificaci�n de " << mejor_calificacion << std::endl;
  std::cout << "El alumno con la peor calificaci�n es " << nombres[peor_calificacion]
            << " con una calificaci�n de " << peor_calificacion << std::endl;
  std::cout << "La carrera con el mejor desempe�o es " << carreras[0]
            << " con un promedio de " << promedio_carrera << std::endl;

  return 0;
}





